using System;
using System.Collections.Generic;
using System.Text;

namespace Strings
{
    class Program
    {
        static void Main(string[] args)
        {
            string cadena1 = "Microsft: Tu Potencial, nuestra pasión";
            string[] cadena2 = cadena1.Split(new char[] { ' ' });
            foreach (string palabra in cadena2)
            {
                if (palabra.Length >= 8)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                }
                else if (palabra.Length == 7)
                {
                    Console.ForegroundColor = ConsoleColor.Yellow;
                }
                else
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                }
                Console.WriteLine(palabra);
            }
            string cadena3 = cadena1 + " - Ejercicio Strings";
            int primeraposicion = cadena3.IndexOf(" ");
            cadena3 = cadena3.Substring(primeraposicion).Trim();
            primeraposicion = cadena3.IndexOf(" ");
            cadena3 = cadena3.Substring(primeraposicion).Trim();
            Console.WriteLine(cadena3);
            Console.ReadLine();

            DateTime ahora = DateTime.Now;
            DateTime proxdiames = new DateTime(ahora.Year, ahora.Month, 1).AddMonths(1);
            DateTime ultimodiahabilmes = proxdiames.AddMonths(1).AddDays(-1);
            if (ultimodiahabilmes.DayOfWeek == DayOfWeek.Sunday)
            {
                ultimodiahabilmes = ultimodiahabilmes.AddDays(-2);
            }
            else if (ultimodiahabilmes.DayOfWeek == DayOfWeek.Saturday)
            {
                ultimodiahabilmes = ultimodiahabilmes.AddDays(-1);
            }
            Console.WriteLine("Ahora: " + ahora.Year.ToString() + "-" + ahora.Month.ToString() + "-" + ahora.Day.ToString());
            Console.WriteLine("Primer día del mes siguiente: " + proxdiames.Year.ToString() + "-" + proxdiames.Month.ToString() + "-" + proxdiames.Day.ToString());
            Console.WriteLine("último día habil del mes siguiente: " + ultimodiahabilmes.Year.ToString() + "-" + ultimodiahabilmes.Month.ToString() + "-" + ultimodiahabilmes.Day.ToString());
            Console.ReadLine();

        }
    }
}
