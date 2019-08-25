using System;
using System.Collections.Generic;
using System.Text;
using System.Data;
using System.Data.SqlClient;

namespace Ejercicio6
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

            //Primero indico el CustomerID que deseo modificar
            Console.Write("Escriba el CustomerID que desea modificar: ");
            string custid = Console.ReadLine();


            //Luego me traigo una coleccion de datarows que contengan ese customerid
            DataRow[] rwempresas = dtEmpresas.Select("CustomerID = '" + custid + "'");
            if (rwempresas.Length != 1) //Si no encuentro nada entonces salgo
            {
                Console.WriteLine("CustomerID no encontrado");
                Console.ReadLine();
                return;
            }

            //Me traigo el primer datarow de la colección
            DataRow rowMiEmpresa = rwempresas[0];
            string nombreactual = rowMiEmpresa["CompanyName"].ToString();
            //Muestro en consola el nombre del customerid seleccionado
            Console.WriteLine("Nombre actual de la empresa: " + nombreactual);
            //Solicito que escriba un nuevo nombre
            Console.Write("Escriba el nuevo nombre: ");
            string nuevonombre = Console.ReadLine();


            //Llamo al método BeginEdit del datarow para iniciar los cambios
            rowMiEmpresa.BeginEdit();
            //Modifico el valor del campo CompanyName
            rowMiEmpresa["CompanyName"] = nuevonombre;
            //Finalizo la edicion llamando al método EndEdit()
            rowMiEmpresa.EndEdit();

            //Ahora creo un objeto Command que utilizare para 
            //guardar los cambios en la base de datos
            SqlCommand updcommand = new SqlCommand();
            //Le indico la coneccion
            updcommand.Connection = myconn;
            //Le indico la cadena TSQL
            updcommand.CommandText =
                "UPDATE Customers SET CompanyName = @CompanyName WHERE CustomerID = @CustomerID";
            //Indico los parametros que estoy utilizando.
            //Como así tambien, el tipo de dato, la longitud del dato
            //el nombre del campo del datatable
            updcommand.Parameters.Add("@CompanyName", SqlDbType.NVarChar, 50, "CompanyName");
            updcommand.Parameters.Add("@CustomerID", SqlDbType.NVarChar, 5, "CustomerID");

            //Ahora adjunto el objeto updcommand al dataadapter
            myadap.UpdateCommand = updcommand;
            //Por último llamo al método .Update del DataAdapter
            myadap.Update(dtEmpresas);
        }
    }
}
