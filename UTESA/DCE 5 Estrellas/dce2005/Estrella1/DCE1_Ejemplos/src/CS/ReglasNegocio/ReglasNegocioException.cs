using System;
using System.Collections.Generic;
using System.Text;

namespace DCE05.Ejemplos.EstrellaUno.ReglasNegocio {

    /// <summary>
    /// Representa un error genérico producido en las reglas de negocio.
    /// De esta clase deben heredar las clases que representen errores 
    /// específicos de reglas de negocio.
    /// </summary>
    public class ReglasNegocioException : ApplicationException {

        /// <summary>
        /// Construye una instancia con un mensaje de error, 
        /// invocando al constructor de la clase base.
        /// </summary>
        /// <param name="mensaje">El mensaje de error.</param>
        /// <param name="original">El error original.</param>
        public ReglasNegocioException(string mensaje, Exception original)
            : base(mensaje, original) {
        }

        /// <summary>
        /// Construye una instancia con un mensaje de error, 
        /// invocando al constructor de la clase base.
        /// </summary>
        /// <param name="mensaje">El mensaje de error.</param>
        public ReglasNegocioException(string mensaje)
            : base(mensaje) {
        }

    }
}
