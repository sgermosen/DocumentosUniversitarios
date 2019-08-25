using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {

    /// <summary>
    /// Representa un error que ocurre cuando 
    /// se selecciona una opción inválida.
    /// </summary>
    class OpcionInvalidaException : ApplicationException {

        /// <summary>
        /// Construye una instancia en base a un mensaje de error.
        /// </summary>
        /// <param name="mensaje">El mensaje de error.</param>
        public OpcionInvalidaException(string mensaje) : base(mensaje) { }
    }
}
