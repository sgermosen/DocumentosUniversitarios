using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace SemaforosLab
{
    public class Tester
    {
        private Semaphore sem;
        private int _id;

        
        // Constructor
        public Tester(int i)
        {
            _id = i;
            sem = new Semaphore(1, 1, "ElSemaforo");
        }


        // Metodo que ejecuta algo
        public void Ejecutar()
        {
            for (int j = 0; j < 5; j++)
            {
                // Activacion del semaforo
                sem.WaitOne();
                for (int i = 0; i < 5; i++)
                {
                    Console.WriteLine("Tester {0}", _id);
                    Thread.Sleep(200);
                }
                // Liberacion del semaforo
                sem.Release();
            }
        }
    }
}
