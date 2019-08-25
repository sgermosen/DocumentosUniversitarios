using System;
using System.Collections.Generic;
using System.Text;

namespace LabSintaxis2
{
    class Program
    {
        static void Main(string[] args)
        {
            //Muestra un mensaje en la pantalla pidiendo informacion al usuario
            Console.WriteLine("Ingrese una frase");
            string inputTexto = Console.ReadLine();

            if ( inputTexto != "" )
            {
                // Muestra un menu para que el usuario seleccione una opcion
                Console.WriteLine("1-Mostrar nombre en mayusculas");
                Console.WriteLine("2-Mostrar nombre en minusculas");
                Console.WriteLine("3-Mostrar largo del nombre");
                Console.WriteLine("Ingrese una opcion");
                ConsoleKeyInfo opcion = Console.ReadKey();
                Console.WriteLine();
                if (opcion.Key == ConsoleKey.D1)
                {
                    Console.WriteLine(inputTexto.ToUpper());
                }
                else if (opcion.Key == ConsoleKey.D2) 
                {
                    Console.WriteLine(inputTexto.ToLower());
                }
                else if (opcion.Key == ConsoleKey.D3) 
                {
                    Console.WriteLine(inputTexto.Length);
                } 
                else 
                {
                    Console.WriteLine("La opcion no es valida");
                } 
            }
            else
            {
                Console.WriteLine("Error. No se ingreso contenido");
            }

            Console.ReadKey();
        }
    }
}
