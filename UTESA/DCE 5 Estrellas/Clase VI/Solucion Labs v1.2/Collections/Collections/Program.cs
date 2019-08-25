using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

namespace Collections
{
    class Program
    {
        static void Main(string[] args)
        {
            ArrayList lista = new ArrayList();
            bool salida = false;
            while (!salida)
            {
                Console.Write("Escriba una palabra: ");
                string palabra = Console.ReadLine(); ;
                if (palabra.ToLower() == "exit")
                {
                    salida = true;
                }
                else
                {
                    lista.Add(palabra);
                }
            }
            foreach (string cadenas in lista)
            {
                Console.WriteLine(cadenas);
            }
            Console.ReadLine();
            
            SortedList slista = new SortedList();
            salida = false;
            while (!salida)
            {
                Console.Write("Escriba una palabra nuevamente: ");
                string palabra = Console.ReadLine(); ;
                if (palabra.ToLower() == "exit")
                {
                    salida = true;
                }
                else
                {
                    slista.Add(palabra, palabra);
                }
            }
            for(int i = 0; i < slista.Count; i++)
            {
                Console.WriteLine(slista.GetByIndex(i).ToString());
            }
            Console.ReadLine();
        }
    }
}
