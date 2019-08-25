using System;
using System.Collections.Generic;
using System.Text;

namespace Ejercicio3
{
    class Program
    {
        static void Main(string[] args)
        {
            dsUniversidad miUniversidad = new dsUniversidad();

            dsUniversidad.dtAlumnosDataTable dtAlumnos
                = new dsUniversidad.dtAlumnosDataTable();
            dsUniversidad.dtCursosDataTable dtCursos
                = new dsUniversidad.dtCursosDataTable();
            dsUniversidad.dtAlumnosRow rowAlumno = dtAlumnos.NewdtAlumnosRow();
            
            rowAlumno.Apellido = "Perez";
            rowAlumno.Nombre = "Juan";
            dtAlumnos.AdddtAlumnosRow(rowAlumno);

            dsUniversidad.dtCursosRow rowCurso = dtCursos.NewdtCursosRow();
            rowCurso.Curso = "Informatica";
            dtCursos.AdddtCursosRow(rowCurso);


            //Primero creamos el objeto datatable
            dsUniversidad.dtAlumnos_CursosDataTable dtAlumnos_Cursos
                = new dsUniversidad.dtAlumnos_CursosDataTable();

            dsUniversidad.dtAlumnos_CursosRow rowAlumnosCursos =
                dtAlumnos_Cursos.NewdtAlumnos_CursosRow();

            dtAlumnos_Cursos.AdddtAlumnos_CursosRow(rowAlumno, rowCurso);

            rowAlumno = dtAlumnos.NewdtAlumnosRow();
            rowAlumno.Nombre = "Marcelo";
            rowAlumno.Apellido = "Perez";
            dtAlumnos.AdddtAlumnosRow(rowAlumno);

            dtAlumnos_Cursos.AdddtAlumnos_CursosRow(rowAlumno, rowCurso);

            /*
             * 
            El Código de aquí en adelante no funciona con la version 
            de VisualStudio 2005 CTP de Septiembre
             * 
             * 
                Console.Write("Indique el nombre del curso: ");
                string materia = Console.ReadLine();
                Console.WriteLine("Listado de alumnos asociados al curso " + materia);
                foreach (dsUniversidad.dtCursosRow rCurso in dtCursos.Select("Curso = '" + materia + "'"))
                {
                    foreach (dsUniversidad.dtAlumnos_CursosRow rAlumno in rCurso.GetdtAlumnos_CursosRows())
                    {
                        string nombre = rAlumno.dtAlumnosRow.Nombre;
                        string apellido = rAlumno.dtAlumnosRow.Apellido;
                        Console.WriteLine(apellido + ", " + nombre);
                    }
                }
                Console.ReadLine();
            */

        }
    }
}
