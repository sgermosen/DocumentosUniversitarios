using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using System.Data.SqlClient;

namespace Ejercicio5
{
    class Program
    {
        static void Main(string[] args)
        {
            //Creo un objeto DataTable llamado Empresas
            DataTable dtEmpresas = new DataTable("Empresas");
            //Al objeto DataTable le agrego dos datacolumns del tipo string
            dtEmpresas.Columns.Add("CustomerID", typeof(string));
            dtEmpresas.Columns.Add("CompanyName", typeof(string));

            //Creamos un objeto SQLConnection
            SqlConnection myconn = new SqlConnection();
            //Indicamos el Connection String que utilizará
            myconn.ConnectionString =
                "Data Source=BEYOND07;Initial Catalog=Northwind;User ID=sa;Pwd=123";

            //Creamos un adaptador del tipo SQlDataAdapter y 
            //Le indicamos el command text que utilizará para realizar la consulta
            //y el objeto sqlconnection que utiliza
            SqlDataAdapter myadap =
                new SqlDataAdapter("SELECT CustomerID, CompanyName FROM Customers ORDER BY CustomerID", myconn);

            //Abro la coneccion
            myconn.Open();
            //Cargo el contenido del result set obtenido de la base 
            //de datos en el objeto datatable
            myadap.Fill(dtEmpresas);
            //Cierro la coneccion
            myconn.Close();


            //Recorro la lista de empresas obtenidas
            //y lo muestro en consola
            Console.WriteLine("Listado de Empresas: ");
            foreach (DataRow rowEmpresa in dtEmpresas.Rows)
            {
                string idempresa = rowEmpresa["CustomerID"].ToString();
                string nombreempresa = rowEmpresa["CompanyName"].ToString();
                Console.WriteLine(idempresa + " - " + nombreempresa);
            }
            Console.ReadLine(); 

        }
    }
}
