using System;
using System.Collections.Generic;
using System.Text;

using DCE05.Ejemplos.EstrellaUno.ReglasNegocio;

namespace DCE05.Ejemplos.EstrellaUno.Cliente {
    
    /// <summary>
    /// Representa una opción genérica.
    /// Todas las opciones del sistema deben heredar de esta opción.
    /// </summary>
    internal abstract class Opcion {

        private int codigo = 0;
        private string descripcion;

        /// <summary>
        /// El código de la opción.
        /// </summary>
        protected internal int Codigo {
            get { return codigo; }
            set { codigo = value; }
        }

        /// <summary>
        /// La descripción de la opción.
        /// </summary>
        protected internal string Descripcion {
            get { return descripcion; }
            protected set { descripcion = value; }
        }

        /// <summary>
        /// Ejecuta la acción asociada a la opción.
        /// </summary>
        internal abstract void EjecutarAccion();

    }
}
