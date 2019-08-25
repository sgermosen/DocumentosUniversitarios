using System;
using System.Collections.Generic;
using System.Text;

using DCE05.Ejemplos.EstrellaUno.ReglasNegocio;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {

    /// <summary>
    /// Representa la opción de salir del sistema y finalizar la venta.
    /// </summary>
    internal class OpcionSalir : Opcion {

        /// <summary>
        /// Ejecuta la acción asociada a la opción.
        /// </summary>
        internal override void EjecutarAccion() {
            try {
                CatalogoVentas catalogo = new CatalogoVentas();
                if (PuntoDeVenta.VentaActual != null) {
                    catalogo.CancelarVenta(PuntoDeVenta.VentaActual);
                }
                catalogo.CancelarVentasPendientes();
                PuntoDeVenta.Salir();
            } catch (ReglasNegocioException ex) {
                Console.WriteLine("Error al cancelar las ventas : " + ex.Message);
            }
        }

        /// <summary>
        /// Construye una instancia de la opción con sus datos básicos.
        /// </summary>
        /// <param name="codigo">El código de la opción.</param>
        internal OpcionSalir(int codigo) {
            Codigo = codigo;
            Descripcion = "Salir";
        }

    }
}
