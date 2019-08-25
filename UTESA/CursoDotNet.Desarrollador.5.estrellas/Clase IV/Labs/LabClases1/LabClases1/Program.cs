using System;
using System.Collections.Generic;
using System.Text;
using Clases;

namespace LabClases1
{
    class Program
    {
        static void Main(string[] args)
        {
            A a = new A("InstA");
            B b = new B();

            a.MostrarNombre();
            b.MostrarNombre();

            a.M1();
            a.M2();
            a.M3();

            b.M1();
            b.M2();
            b.M3();
            b.M4();

            Console.ReadKey();
        }
    }
}
