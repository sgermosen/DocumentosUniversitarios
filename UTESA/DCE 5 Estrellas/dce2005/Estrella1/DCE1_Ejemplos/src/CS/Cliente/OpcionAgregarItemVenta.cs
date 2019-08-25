using System;
using System.Collections.Generic;
using System.Text;
using DCE05.Ejemplos.EstrellaUno.ReglasNegocio;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {
    
    /// <summary>
    /// Representa la opción de agregar un ítem de venta a una venta iniciada.
    /// </summary>
    internal class OpcionAgregarItemVenta : Opcion {

        /// <summary>
        /// Construye una instancia de la opción con sus datos básicos.
        /// </summary>
        /// <param name="codigo">El código de la opción.</param>
        internal OpcionAgregarItemVenta(int codigo) {
            Codigo = codigo;
            Descripcion = "Agregar un Item de Venta";
        }

        /// <summary>
        /// Ejecuta la acción asociada a la opción.
        /// </summary>
        /// <exception cref="OpcionInvalidaException">Si la opción no fue ejecutada exitosamente.</exception>
        internal override void EjecutarAccion() {
            if (PuntoDeVenta.VentaActual == null) {
                throw new OpcionInvalidaException("La venta no fue iniciada.");
            }

            try {
                new OpcionListarProductos().EjecutarAccion();

                CatalogoProductos catalogoProd = new CatalogoProductos();
                Producto producto = null;
                Console.Write("Seleccione un Producto de la lista a agregar: ");
                try {
                    int idProducto = int.Parse(Console.ReadLine());
                    producto = catalogoProd.ObtenerProducto(idProducto);
                    if (producto == null) {
                        throw new OpcionInvalidaException("Producto inválido.");
                    }
                } catch (FormatException) {
                    throw new OpcionInvalidaException("Número inválido !");
                }

                int cantidad = 0;
                Console.Write("Seleccione la cantidad a agregar: ");
                try {
                    cantidad = int.Parse(Console.ReadLine());
                } catch (FormatException) {
                    throw new OpcionInvalidaException("Cantidad inválida !");
                }

                PuntoDeVenta.VentaActual.AgregarItem(new ItemVenta(producto, cantidad));

                Console.Clear();
                Console.WriteLine("Agregados {0} unidades del producto {1}.\n", cantidad, producto.Descripcion);

            } catch (ReglasNegocioException ex) {
                Console.Clear();
                Console.WriteLine("Error al agregar un ítem a la venta actual: " + ex.Message);
            } catch (OpcionInvalidaException ex) {
                Console.Clear();
                Console.WriteLine(ex.Message);
            } catch (Exception) {
                Console.Clear();
                Console.WriteLine("Error al agregar un ítem a la venta actual.");
            }
        }
    }
}
