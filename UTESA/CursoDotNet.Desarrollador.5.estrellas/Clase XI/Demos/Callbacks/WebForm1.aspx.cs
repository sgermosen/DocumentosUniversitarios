using System;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;

// Definition of the page class
namespace ClientCallBacksDemo
{
	public partial class CallbackPage : System.Web.UI.Page
	{
		// References to page controls

		// Initialize the page here
		protected void Page_Load(object sender, EventArgs e)
		{
			if (IsCallback())
				return;

			if (!IsPostBack)
				PopulateList();

			// vinculacion Button-to-callback  
			string callbackRef = "MoreInfo()";
			ButtonGo.Attributes["onclick"] = callbackRef;
		}

		private bool IsCallback()
		{
			if (Request.QueryString["callback"] != null)
			{
				string param = Request.QueryString["param"].ToString();
				Response.Write(RaiseCallbackEvent(param));
				Response.Flush();
				Response.End();
				return true;
			}

			return false;
		}

		protected void OnGoGetData(object sender, EventArgs e)
		{
		}
		
		// llena el drop-down list con empleados
		private void PopulateList()
		{
			SqlDataAdapter adapter = new SqlDataAdapter(
				"SELECT employeeid, lastname FROM employees",
				"SERVER=localhost;DATABASE=northwind;TRUSTED_CONNECTION=true;");
			DataTable table = new DataTable();
			adapter.Fill(table);

			EmployeeList.DataTextField = "lastname";
			EmployeeList.DataValueField = "employeeid";
			EmployeeList.DataSource = table;
			EmployeeList.DataBind();
		}

		// *******************************************************
		// Implementa la interfase de callback
		string RaiseCallbackEvent(string eventArgument)
		{
			return "Se seleccionó el empleado: " + eventArgument;
		}
		// *******************************************************
	}
}