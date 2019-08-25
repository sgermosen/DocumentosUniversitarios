///////////////////////////////////////////
//
// Creation Date & Time: 11/01/2005 00:39:11
//
//
// Namespace: LabSintaxis7.Juego
//
//
///////////////////////////////////////////

#region FileHistory
///////////////////////////////////////////
//
// 11/01/2005 00:39:11 - File created by jonathans
//
///////////////////////////////////////////
#endregion

using System;
using System.Collections.Generic;
using System.Text;

namespace LabSintaxis7
{
    class Juego
    {
        //Atributo interno que lleva el record de acierto en menor numero de jugadas
        private int _record = 1000;

        /// <summary>
        /// Constructor por defecto
        /// </summary>
        public Juego()
        { 
        }

        /// <summary>
        /// Metodo que comienza el juego
        /// </summary>
        public void ComenzarJuego()
        {
            do
            {
                Console.Clear();
                //En cada iteración instancia una jugada
                Jugada jugada = new Jugada(PreguntarMaximo());

                //Se juega hasta que se adivina
                while (!jugada.Adivino)
                {
                    try
                    {
                        Console.WriteLine(jugada.Comparar(PreguntarNumero()));    
                    }
                    catch
                    {
                        Console.WriteLine("Jugada Invalida");
                    }
                }
                // Compara el record con los intentos que llevo la jugada
                Console.WriteLine( CompararRecord(jugada.Intentos) );
            } while (Continuar());

        }

        /// <summary>
        /// Metodo privado de jugada, compara el record con la cantidad de intentos de 
        /// la jugada finalizada, devuelve un mensaje
        /// </summary>
        /// <param name="intentos"></param>
        /// <returns></returns>
        private string CompararRecord(int intentos)
        {
            if (intentos < _record )
            {
                _record = intentos;
                return "Se ha establecido un nuevo record en el juego";
            }
            else
            {
                return "El record continua siendo " + _record.ToString() + " jugadas";
            }
        }
        
        /// <summary>
        /// Este método pregunta el numero al participante.
        /// No realiza la captura de errores, es decir que si hubiera un problema, por ejemplo
        /// al transformar el string en un entero, el error debe ser capturado fuera del metodo,
        /// tal como se observa en ComenzarJuego()
        /// </summary>
        /// <returns></returns>
        private int PreguntarNumero()
        {
            Console.WriteLine("Ingrese un número");
            string result = Console.ReadLine();
            return Int32.Parse(result);
        }

        /// <summary>
        /// Este metodo lleva la estrategia inversa al anterior, es decir, 
        /// la validacion es interna, y captura la propia excepcion que pudiera arrojar
        /// </summary>
        /// <returns></returns>
        private int PreguntarMaximo()
        {
            bool ok = false;
            int maximo = 0;
            while (!ok)
            {
                Console.WriteLine("Ingrese número máximo");
                string result = Console.ReadLine();
                try
                {
                    maximo = Int32.Parse(result);
                    ok = true;
                }
                catch (Exception err)
                {
                    Console.WriteLine("El valor ingresado no es correcto");
                }
            }
            return maximo;
        }

        /// <summary>
        /// Formula la pregunta para continuar, devuelve un booleano que indica la respuesta
        /// </summary>
        /// <returns></returns>
        private bool Continuar()
        {
            Console.WriteLine("Otra partida?(S/N)");
            ConsoleKeyInfo result = Console.ReadKey();
            return (result.Key == ConsoleKey.S);
        }
    }
}
