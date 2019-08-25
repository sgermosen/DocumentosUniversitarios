using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {
    
    /// <summary>
    /// Representa la lista de opciones de la aplicación.
    /// </summary>
    internal class ListaOpciones {

        /// <summary>
        /// La lista de opciones disponibles.
        /// </summary>
        private static List<Opcion> opciones = new List<Opcion>();

        /// <summary>
        /// Construye estáticamente la lista de opciones.
        /// </summary>
        static ListaOpciones() {
            opciones.Add(new OpcionListarProductos(1));
            opciones.Add(new OpcionIniciarVenta(2));
            opciones.Add(new OpcionAgregarItemVenta(3));
            opciones.Add(new OpcionListarCarrito(4));
            opciones.Add(new OpcionConfirmarVenta(5));
            opciones.Add(new OpcionCancelarVenta(6));
            opciones.Add(new OpcionSalir(99));
        }

        /// <summary>
        /// Obtiene el listado de opciones disponibles.
        /// </summary>
        /// <returns>El listado de opciones.</returns>
        internal static List<Opcion> ObtenerOpciones() {
            return opciones;
        }

        /// <summary>
        /// Permite obtener una opción según su código.
        /// </summary>
        /// <param name="codigo">El código de la opción</param>
        /// <returns>La opción encontrada.</returns>
        /// <exception cref="OpcionInvalidaException">Si la opción no existe.</exception>
        internal static Opcion Obtener(int codigo) {
            Opcion opcion = null;
            foreach (Opcion o in opciones) {
                if (o.Codigo.Equals(codigo)) {
                    opcion = o;
                    break;
                }
            }

            if (opcion == null) {
                throw new OpcionInvalidaException("Opción inválida.");
            }

            return opcion;
        }
    }
}
