using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    public class A
    {
        private string _nombreInstancia;

        protected string NombreInstancia
        {
            get { return _nombreInstancia; }
            set { _nombreInstancia = value; }
        }

        public A()
        {
            NombreInstancia = "Sin Nombre";
        }

        public A(string nombre)
        {
            NombreInstancia = nombre;
        }

        public void MostrarNombre()
        {
            Console.WriteLine(NombreInstancia);
        }

        public void M1()
        {
            Console.WriteLine("Invocado M1");
        }

        public void M2()
        {
            Console.WriteLine("Invocado M2");
        }

        public void M3()
        {
            Console.WriteLine("Invocado M3");
        }
    }
}
