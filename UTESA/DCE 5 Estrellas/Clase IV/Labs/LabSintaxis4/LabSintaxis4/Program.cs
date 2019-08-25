using System;
using System.Collections.Generic;
using System.Text;

namespace LabSintaxis4
{
    class Program
    {
        static void Main(string[] args)
        {
            string rta = "";
            do
            {
                try
                {
                    // Pregunta por el dividendo
                    Console.WriteLine("Ingrese el dividendo");
                    string usrInput = Console.ReadLine();

                    // Dividendo, de string a decimal
                    decimal dividendo = Decimal.Parse(usrInput);

                    //Pregunta por el divisor
                    Console.WriteLine("Ingrese el divisor");
                    usrInput = Console.ReadLine();

                    // Divisor, de string a decimal
                    decimal divisor = Decimal.Parse(usrInput);

                    //genera la division
                    decimal resultado = dividendo / divisor;
                    Console.WriteLine();
                    Console.WriteLine("Resultado de: " + dividendo.ToString("0.00") + " / " + divisor.ToString("0.00"));
                    Console.WriteLine(resultado.ToString("0.00"));
                }
                catch (DivideByZeroException err)
                {
                    Console.WriteLine("No se puede dividir por cero - " + err.Message);
                }
                catch (InvalidCastException err)
                {
                    Console.WriteLine("Entrada Invalida - " + err.Message);
                }
                catch (Exception err)
                {
                    Console.WriteLine("No se puede realizar la operacion - " + err.Message);
                }
                // Preguntar si se desea ejecutar otra operacion
                Console.WriteLine("Ejecutar otro calculo?(S/N)");
                rta = Console.ReadLine();
            } while (rta.ToUpper() == "S");

        }
    }
}
