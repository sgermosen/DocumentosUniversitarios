using System;
using System.Collections.Generic;
using System.Text;

namespace GenericsLab
{
    class Program
    {
        static void Main(string[] args)
        {
            ListaGenerica<int> listaEnteros     = new ListaGenerica<int>();
            ListaGenerica<string> listaString   = new ListaGenerica<string>();

            // Agrega elementos
            listaEnteros.Agregar(10);
            listaEnteros.Agregar(20);
            listaEnteros.Agregar(30);
            listaEnteros.Agregar(40);
            listaEnteros.Agregar(50);
            listaEnteros.Agregar(60);

            listaString.Agregar("hola");
            listaString.Agregar("chau");
            listaString.Agregar("perro");
            listaString.Agregar("gato");
            listaString.Agregar("casa");

            // Saca los elementos tope de las dos listas
            Console.WriteLine(listaEnteros.Sacar().ToString());
            Console.WriteLine(listaString.Sacar());
            

            // Termina de sacar los elementos de ambas listas
            // utilizando el IEnumerator
            foreach (int valor in listaEnteros)
            {
                Console.WriteLine(valor.ToString());
            }

            foreach (string valor in listaString)
            {
                Console.WriteLine(valor);
            }

            // La lista esta vacia. Devuelve valores por defecto
            Console.WriteLine(listaEnteros.Sacar().ToString());
            Console.WriteLine(listaString.Sacar());

            Console.ReadLine();

        }
    }
}
