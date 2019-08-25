using System;
using System.Collections.Generic;
using System.Text;

namespace ClassDemo
{
    public class Heredera : Base
    {
        public void Asignar(int v1, string v2)
        {
            Console.WriteLine("Asignacion de valor entero:");
            Console.WriteLine("Asignacion de string:");
            SetValores(v1, v2);
        }

        Heredera(int val1, string val2)
        {
            SetValores(val1, val2);  
        }

        private void SetValores(int v1, string v2)
        {
            Valor1 = v1;
            Valor2 = v2;
        }

        
    }
}
