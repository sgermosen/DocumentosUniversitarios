using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace SemaforosLab
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0; i < 5; i++)
            {
                Tester obj = new Tester(i);
                Thread t = new Thread(new ThreadStart(obj.Ejecutar));
                t.Start();
            }
            Console.ReadLine();
        }
    }
}
