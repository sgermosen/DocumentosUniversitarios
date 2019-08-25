using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    public class Class1
    {
        private string v_NombreInstancia;

        protected string NombreInstancia
        {
            get { return v_NombreInstancia; }
            set { v_NombreInstancia = value; }
        }

        public Class1()
        {
            NombreInstancia = "Sin Nombre";
        }

        public Class1(string v_nombre)
        {
            NombreInstancia = v_nombre;
        }

        public void MostrarNombre()
        {
            Console.WriteLine(NombreInstancia);
        }
    }
}
