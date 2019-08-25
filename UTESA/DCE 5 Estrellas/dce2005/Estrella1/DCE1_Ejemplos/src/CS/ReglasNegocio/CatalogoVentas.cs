using System;
using System.Collections.Generic;
using DCE05.Ejemplos.EstrellaUno.AccesoDatos;
using System.Data.Common;
using System.Data;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {

    /// <summary>
    /// Representa el catálogo de ventas del sistema.
    /// Permite administrar la lógica de negocios asociada a las ventas.
    /// </summary>
    public class CatalogoVentas {

        /// <summary>
        /// Obtiene el listado de ventas registradas en el sistema.
        /// </summary>
        /// <returns>El listado de ventas registradas.</returns>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public List<Venta> ObtenerVentas() {
            List<Venta> ventas = new List<Venta>();
            try {
                string sql = "SELECT Codigo, Fecha FROM Ventas";
                BaseDatos db = new BaseDatos();
                db.Conectar();
                db.CrearComando(sql);
                DbDataReader datosVentas = db.EjecutarConsulta();

                Venta venta = null;
                while (datosVentas.Read()) {
                    try {
                        venta = new Venta();
                        venta.Codigo = datosVentas.GetInt32(0);
                        venta.Fecha = datosVentas.GetDateTime(1);

                        List<ItemVenta> items = ObtenerItemsVenta(venta);
                        foreach (ItemVenta item in items) {
                            venta.AgregarItem(item);
                        }

                        ventas.Add(venta);
                    } catch (InvalidCastException ex) {
                        throw new ReglasNegocioException("Los tipos no coinciden.", ex);
                    } catch (DataException ex) {
                        throw new ReglasNegocioException("Error de ADO.NET.", ex);
                    }
                }
                datosVentas.Close();
                db.Desconectar();
            } catch (BaseDatosException) {
                throw new ReglasNegocioException("Error al acceder a la base de datos para obtener las ventas.");
            } catch (ReglasNegocioException ex) {
                throw new ReglasNegocioException("Error a obtener las ventas. " + ex.Message);
            }
            return ventas;
        }

        /// <summary>
        /// Obtiene los ítems de una venta.
        /// </summary>
        /// <param name="venta">La venta cuyos ítems se van a obtener.</param>
        /// <returns>Los ítems de la venta.</returns>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        private List<ItemVenta> ObtenerItemsVenta(Venta venta) {
            List<ItemVenta> items = new List<ItemVenta>();

            try {
                string sql = "SELECT Codigo, Cantidad, CodigoProducto FROM ItemsVenta WHERE CodigoVenta=@venta";
                BaseDatos db = new BaseDatos();
                db.Conectar();
                db.CrearComando(sql);
                db.AsignarParametroEntero("@venta", venta.Codigo);
                DbDataReader datosItems = db.EjecutarConsulta();

                ItemVenta item = null;
                CatalogoProductos catalogoProd = new CatalogoProductos();
                while (datosItems.Read()) {
                    try {
                        Producto producto = catalogoProd.ObtenerProducto(datosItems.GetInt32(2));
                        item = new ItemVenta(datosItems.GetInt32(0), producto, datosItems.GetInt32(1));

                        venta.AgregarItem(item);
                    } catch (InvalidCastException ex) {
                        throw new ReglasNegocioException("Los tipos no coinciden.", ex);
                    } catch (DataException ex) {
                        throw new ReglasNegocioException("Error de ADO.NET.", ex);
                    }
                }
                datosItems.Close();
                db.Desconectar();
            } catch (BaseDatosException) {
                throw new ReglasNegocioException("Error al acceder a la base de datos para obtener los ítems de venta.");
            } catch (ReglasNegocioException ex) {
                throw new ReglasNegocioException("Error a obtener los ítems de venta. " + ex.Message);
            }
            return items;
        }

        /// <summary>
        /// Confirma una venta registrando sus ítems en el sistema.
        /// La venta debe poseer items.
        /// </summary>
        /// <param name="venta">La venta a registrar.</param>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public void ConfirmarVenta(Venta venta) {
            if (venta.Items.Count.Equals(0)) {
                throw new ReglasNegocioException("La venta no contiene ningún ítem.");
            }

            BaseDatos db = new BaseDatos();
            try {
                db.Conectar();
                db.ComenzarTransaccion();

                string sql = "INSERT ItemsVenta (CodigoVenta, CodigoProducto, Cantidad) VALUES (@venta, @producto, @cantidad); SELECT @@IDENTITY";
                foreach (ItemVenta item in venta.Items) {
                    db.CrearComando(sql);
                    db.AsignarParametroEntero("@venta", venta.Codigo);
                    db.AsignarParametroEntero("@producto", item.Producto.Codigo);
                    db.AsignarParametroEntero("@cantidad", item.Cantidad);
                    item.Codigo = db.EjecutarEscalar();
                }
                db.ConfirmarTransaccion();
            } catch (BaseDatosException ex) {
                db.CancelarTransaccion();
                throw new ReglasNegocioException("Error al registrar la venta.", ex);
            } finally {
                db.Desconectar();
            }
        }

        /// <summary>
        /// Inicia una nueva venta en el sistema.
        /// </summary>
        /// <returns>La venta iniciada.</returns>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public Venta IniciarVenta() {
            Venta venta = new Venta();

            BaseDatos db = new BaseDatos();
            try {
                db.Conectar();
                string sql = "INSERT Ventas (Fecha) VALUES (DEFAULT); SELECT @@IDENTITY";
                db.CrearComando(sql);
                venta.Codigo = db.EjecutarEscalar();
            } catch (BaseDatosException ex) {
                throw new ReglasNegocioException("Error al iniciar la venta.", ex);
            } finally {
                db.Desconectar();
            }

            return venta;
        }

        /// <summary>
        /// Cancela las ventas pendientes (iniciadas pero que no poseen ítems).
        /// </summary>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public void CancelarVentasPendientes() {

            try {
                List<Venta> ventas = ObtenerVentas();

                foreach (Venta venta in ventas) {
                    if (venta.Items.Equals(0)) {
                        CancelarVenta(venta);
                    }
                }
            } catch (Exception ex) {
                throw new ReglasNegocioException("Error al cancelar las ventas vacías.", ex);
            }

        }

        /// <summary>
        /// Cancela una venta.
        /// </summary>
        /// <param name="venta">La venta a cancelar.</param>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public void CancelarVenta(Venta venta) {
            BaseDatos db = new BaseDatos();
            try {
                db.Conectar();
                db.ComenzarTransaccion();

                string sql = "DELETE ItemsVenta WHERE Codigo = @codigo";
                foreach (ItemVenta item in venta.Items) {
                    db.CrearComando(sql);
                    db.AsignarParametroEntero("@codigo", item.Codigo);
                    db.EjecutarComando();
                }

                sql = "DELETE Ventas WHERE Codigo = @codigo";
                db.CrearComando(sql);
                db.AsignarParametroEntero("@codigo", venta.Codigo);
                db.EjecutarComando();

                db.ConfirmarTransaccion();
            } catch (BaseDatosException ex) {
                db.CancelarTransaccion();
                throw new ReglasNegocioException("Error al cancelar la venta.", ex);
            } finally {
                db.Desconectar();
            }
        }
    }
}
