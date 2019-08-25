using System;
using System.Collections.Generic;
using System.Text;

using DCE05.Ejemplos.EstrellaUno.ReglasNegocio;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {
    
    /// <summary>
    /// Representa la opción de finalizar una venta.
    /// </summary>
    internal class OpcionConfirmarVenta : Opcion {

        /// <summary>
        /// Ejecuta la acción asociada a la opción.
        /// </summary>
        /// <exception cref="OpcionInvalidaException">Si la opción no fue ejecutada exitosamente.</exception>
        internal override void EjecutarAccion() {
            if (PuntoDeVenta.VentaActual == null) {
                throw new OpcionInvalidaException("La venta no fue iniciada.");
            }

            try {
                CatalogoVentas catalogo = new CatalogoVentas();
                catalogo.ConfirmarVenta(PuntoDeVenta.VentaActual);
                Console.WriteLine("Venta confirmada.\nTotal: {0}\n", PuntoDeVenta.VentaActual.Total());
                PuntoDeVenta.VentaActual = null;
            } catch (ReglasNegocioException ex) {
                Console.WriteLine("Error al finalizar la venta: " + ex.Message);
            }
        }

        /// <summary>
        /// Construye una instancia de la opción con sus datos básicos.
        /// </summary>
        /// <param name="codigo">El código de la opción.</param>
        internal OpcionConfirmarVenta(int codigo) {
            Codigo = codigo;
            Descripcion = "Confirmar Venta Actual";
        }

    }
}
