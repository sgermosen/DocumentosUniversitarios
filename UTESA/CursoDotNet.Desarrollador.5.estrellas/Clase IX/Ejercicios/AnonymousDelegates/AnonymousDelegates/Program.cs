using System;
using System.Collections.Generic;
using System.Text;

namespace AnonymousDelegates
{
    // Define el método delegate
    delegate decimal CalcularBonus(decimal ventas);

    // Define Empleado
    class Empleado
    {
        public string nombre;
        public decimal ventas;
        public decimal bonus;
        public CalcularBonus algoritmo_calculo;
    }

    class Program
    {

        // Esta clase define dos delegates que realizan calculos
        // La primera es un metodo con nombre, las segunda es un anonymous delegate.
        
        // Este es el método con nombre
        // define una posible implementacion del algoritmo de calculo de bonos
        static decimal CalcularBonusComun(decimal ventas)
        {
            return ventas / 10;
        }

        static void Main(string[] args)
        {

            // Valor utilizado en el calculo de bonus
            decimal multiplicador = 2;

            // Delegate definido con el método que no es anonimo.
            CalcularBonus bonus_comun = new CalcularBonus(CalcularBonusComun);

            // Este Delegate es anonimo, no hay un metodo con nombre definido
            // Define un algoritmo de calculo alternativo
            CalcularBonus bonus_mejorado = delegate(decimal ventas) { return multiplicador * ventas / 10; };

            // Declara algunos empleados
            Empleado[] equipo = new Empleado[4];

            // Crea el array de empleados
            for (int i = 0; i < 4; i++)
                equipo[i] = new Empleado();

            // Asigna valores iniciales
            equipo[0].nombre = "Juan";
            equipo[0].ventas = 100;
            equipo[0].algoritmo_calculo = bonus_comun;

            equipo[1].nombre = "Pedro";
            equipo[1].ventas = 200;
            equipo[1].algoritmo_calculo = bonus_comun;

            equipo[2].nombre = "Carlos";
            equipo[2].ventas = 300;
            equipo[2].algoritmo_calculo = bonus_mejorado;

            equipo[3].nombre = "Raul";
            equipo[3].ventas = 100;
            equipo[3].algoritmo_calculo = bonus_mejorado;

            // Calcula el bonus para cada empleado
            foreach (Empleado empleado in equipo)
                CalcularBonus(empleado);

            // Muestra la informacion de cada empleado
            foreach (Empleado empleado in equipo)
                MostrarDetalleEmpleado(empleado);

            // Termina el programa
            Console.ReadLine();

        }

        public static void CalcularBonus(Empleado empleado)
        {
            // Este metodo usa al delegate guardado en empleado para realizar el calculo
            // Notar que conoce el valor de la variable local multiplicador, a pesar de que
            // la misma esta fuera del alcance del metodo.
            empleado.bonus = empleado.algoritmo_calculo(empleado.ventas);
        }

        public static void MostrarDetalleEmpleado(Empleado empleado)
        {
            Console.WriteLine(empleado.nombre);
            Console.WriteLine(empleado.bonus);
            Console.WriteLine("---------------");
        }
    }

}
