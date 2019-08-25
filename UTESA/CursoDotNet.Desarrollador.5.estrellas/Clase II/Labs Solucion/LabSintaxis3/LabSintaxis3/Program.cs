using System;
using System.Collections.Generic;
using System.Text;

namespace LabSintaxis3
{
    class Program
    {
        static void Main(string[] args)
        {

            int cantIteraciones = 5;
            //Creacion de variables      
            string[] listaValores = new string[cantIteraciones];

            //Ingreso de un string en cada una de las posiciones del array
            for (int i = 0; i < cantIteraciones; i++)
            {
                Console.WriteLine("Ingrese una palabra");
                listaValores[i] = Console.ReadLine();
            }

            

            //Muestro los resultados ordenados inversamente
            for (int i = cantIteraciones - 1; i >= 0; i--)
            {
                Console.WriteLine(listaValores[i]);
            }

            Console.ReadKey();




         
        }
    }
}
