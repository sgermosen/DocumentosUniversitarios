using System;
using System.Collections.Generic;
using System.Text;

using DCE05.Ejemplos.EstrellaUno.ReglasNegocio;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {
    
    /// <summary>
    /// Representa la opción de iniciar una venta.
    /// </summary>
    class OpcionIniciarVenta : Opcion {

        /// <summary>
        /// Construye una instancia de la opción con sus datos básicos.
        /// </summary>
        /// <param name="codigo">El código de la opción.</param>
        internal OpcionIniciarVenta(int codigo) {
            Codigo = codigo;
            Descripcion = "Iniciar Venta";
        }

        /// <summary>
        /// Ejecuta la acción asociada a la opción.
        /// </summary>
        /// <exception cref="OpcionInvalidaException">Si la opción no fue ejecutada exitosamente.</exception>
        internal override void EjecutarAccion() {
            if (PuntoDeVenta.VentaActual != null) {
                throw new OpcionInvalidaException("La venta ya fue iniciada.");
            }

            try {
                CatalogoVentas catalogo = new CatalogoVentas();
                PuntoDeVenta.VentaActual = catalogo.IniciarVenta();
                Console.WriteLine("Venta iniciada.");
            } catch (ReglasNegocioException ex) {
                Console.WriteLine("Error al iniciar una venta: " + ex.Message);
            }
        }
    }
}