using System;
using System.Collections.Generic;
using System.Text;

namespace LabSintaxis7
{
    public class Jugada
    {
        
        //Atributos privados de la clase
        private int _numero;
        private int _intentos = 0;
        private bool _adivino = false;

        //Propiedades
        public bool Adivino
        {
            get { return _adivino; }
            set { _adivino = value; }
        }

        public int Intentos
        {
            get { return _intentos; }
            set { _intentos = value; }
        }

        public int Numero
        {
            get { return _numero; }
            set { _numero = value; }
        }

        /// <summary>
        /// Constructor, recibe el numero aleatorio maximo
        /// </summary>
        /// <param name="maxNumer"></param>
        public Jugada(int maxNumero)
        {
            Random rnd = new Random();
            Numero = rnd.Next(maxNumero);
        }

        /// <summary>
        /// El metodo determina si el numero ingresado por el usuario es correcto, mayor o menor al que debe adivinar
        /// </summary>
        /// <param name="numeroIngresado"></param>
        /// <returns></returns>
        public string Comparar(int numeroIngresado)
        {
            Intentos++;
            if (numeroIngresado > Numero)
            { 
                return "El numero ingresado es mayor al esperado";
            }
            else if (numeroIngresado < Numero)
            {
                return "El numero ingresado es menor al esperado";
            }
            else
            {
                Adivino = true;
                return "El numero ingresado es correcto!. Lo encontró en: " + Intentos.ToString() + " intentos.";
            } 
        }


    }
}
