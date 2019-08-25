using System;
using System.Web;
using System.Web.Services;
using System.Web.Services.Protocols;

using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Collections.Generic;

[WebService(Namespace = "http://tempuri.org/")]
[WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
public class Service : System.Web.Services.WebService
{
    public Service () {}

    [WebMethod]
    public List<Product> GetAllProducts()
    {
        string sql = @"SELECT ProductID, ProductName, QuantityPerUnit, UnitPrice, UnitsInStock
                        FROM Products";

        using (SqlConnection myConnection = new SqlConnection(ConfigurationManager.ConnectionStrings["NWConnectionString"].ConnectionString))
        {
            SqlCommand myCommand = new SqlCommand(sql, myConnection);
            SqlDataAdapter myAdapter = new SqlDataAdapter(myCommand);

            myConnection.Open();

            DataTable dt = new DataTable();
            myAdapter.Fill(dt);

            List<Product> results = new List<Product>();

            int currentIndex = 0;
            int totalRecords = dt.Rows.Count;

            while (currentIndex < totalRecords)
            {
                Product product = new Product();

                product.ProductID = Convert.ToInt32(dt.Rows[currentIndex]["ProductID"]);
                product.ProductName = dt.Rows[currentIndex]["ProductName"].ToString();
                product.QuantityPerUnit = dt.Rows[currentIndex]["QuantityPerUnit"].ToString();
                if (dt.Rows[currentIndex]["UnitPrice"].Equals(DBNull.Value))
                    product.UnitPrice = 0;
                else
                    product.UnitPrice = Convert.ToDecimal(dt.Rows[currentIndex]["UnitPrice"]);
                if (dt.Rows[currentIndex]["UnitsInStock"].Equals(DBNull.Value))
                    product.UnitsInStock = 0;
                else
                    product.UnitsInStock = Convert.ToInt32(dt.Rows[currentIndex]["UnitsInStock"]);

                results.Add(product);

                currentIndex++;
            }

            myConnection.Close();

            return results;
        }
    }
}