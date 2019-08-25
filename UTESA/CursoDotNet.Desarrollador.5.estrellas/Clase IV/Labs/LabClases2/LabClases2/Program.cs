using System;
using System.Collections.Generic;
using System.Text;
using Clases;

namespace LabClases2
{
    class Program
    {
        static void Main(string[] args)
        {
            B b = new B();
            A a = b;
            a.F();
            b.F();
            a.G();
            b.G();

            Console.ReadKey();
        }
    }
}
