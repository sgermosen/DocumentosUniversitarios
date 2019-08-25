using System;
using System.Collections.Generic;
using System.Text;
using System.Data.Common;
using System.Data;

using DCE05.Ejemplos.EstrellaUno.AccesoDatos;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {
    
    /// <summary>
    /// Representa el catálogo de productos del sistema.
    /// </summary>
    public class CatalogoProductos {

        /// <summary>
        /// Obtiene la lista de productos del sistema.
        /// </summary>
        /// <returns>La lista de productos.</returns>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public List<Producto> ObtenerProductos() {
            List<Producto> productos = new List<Producto>();
            try {
                string sql = "SELECT Codigo, Descripcion, Precio FROM Productos";
                BaseDatos db = new BaseDatos();
                db.Conectar();
                db.CrearComando(sql);
                DbDataReader datos = db.EjecutarConsulta();

                Producto p = null;
                while (datos.Read()) {
                    try {
                        p = new Producto(datos.GetInt32(0), datos.GetString(1), datos.GetDouble(2));
                        productos.Add(p);
                    } catch (InvalidCastException ex) {
                        throw new ReglasNegocioException("Los tipos no coinciden.", ex);
                    } catch (DataException ex) {
                        throw new ReglasNegocioException("Error de ADO.NET.", ex);
                    }
                }
                datos.Close();
                db.Desconectar();
            } catch (BaseDatosException) {
                throw new ReglasNegocioException("Error al acceder a la base de datos para obtener los productos.");
            } catch (ReglasNegocioException) {
                throw new ReglasNegocioException("Error a obtener los productos.");
            }
            return productos;
        }

        /// <summary>
        /// Obtiene un producto en base a su código.
        /// </summary>
        /// <param name="codigo">El código del producto.</param>
        /// <returns>El producto encontrado.</returns>
        /// <exception cref="ReglasNegocioException">Si ocurre un error de negocio.</exception>
        public Producto ObtenerProducto(int codigo) {
            Producto producto = null;

            try {

                if (codigo <= 0) {
                    throw new ReglasNegocioException("El código es inválido.");
                }

                string sql = "SELECT Codigo, Descripcion, Precio FROM Productos WHERE Codigo=@codigo";
                BaseDatos db = new BaseDatos();
                db.Conectar();
                db.CrearComando(sql);
                db.AsignarParametroEntero("@codigo", codigo);
                DbDataReader datos = db.EjecutarConsulta();

                while (datos.Read()) {
                    try {
                        producto = new Producto(datos.GetInt32(0), datos.GetString(1), datos.GetDouble(2));
                    } catch (InvalidCastException ex) {
                        throw new ReglasNegocioException("Los tipos no coinciden.", ex);
                    } catch (DataException ex) {
                        throw new ReglasNegocioException("Error de ADO.NET.", ex);
                    }
                }
                datos.Close();
                db.Desconectar();
            } catch (BaseDatosException) {
                throw new ReglasNegocioException("Error al acceder a la base de datos para obtener los productos.");
            } catch (ReglasNegocioException ex) {
                throw new ReglasNegocioException("Error a obtener los productos. " + ex.Message);
            }
            return producto;
        }

    }
}
