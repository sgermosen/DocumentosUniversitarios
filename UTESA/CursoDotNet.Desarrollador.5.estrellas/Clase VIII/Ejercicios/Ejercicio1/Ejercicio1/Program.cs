using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using System.Data.SqlClient;

namespace Ejercicio1
{
    class Program
    {
        static void Main(string[] args)
        {
            DataTable dtAlumnos = new DataTable();
            DataRow rwAlumno = dtAlumnos.NewRow();
            DataColumn colNombre = new DataColumn("Nombre", typeof(string));
            DataColumn colApellido = new DataColumn("Apellido", typeof(string));
            dtAlumnos.Columns.Add(colApellido);
            dtAlumnos.Columns.Add(colNombre);

            rwAlumno[colApellido] = "Perez";
            rwAlumno[colNombre] = "Juan";

            dtAlumnos.Rows.Add(rwAlumno);

            DataRow rwAlumno2 = dtAlumnos.NewRow();
            rwAlumno2["Apellido"] = "Perez";
            rwAlumno2["Nombre"] = "Marcelo";
            dtAlumnos.Rows.Add(rwAlumno2);

            Console.WriteLine("Listado de Alumnos:");
            foreach (DataRow row in dtAlumnos.Rows)
            {
                Console.WriteLine(row[colApellido].ToString() + ", " + row[colNombre].ToString());
            }
            Console.ReadLine();
        }
    }
}
