using System;
using System.Data;
using System.Configuration;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Web.UI.HtmlControls;

using System.Globalization;

public partial class _Default : System.Web.UI.Page 
{
    private void Page_Load(object sender, System.EventArgs e)
    {
        if (IsPostBack == false)
        {
            RegionInfo reginfo;                            //Definiendo un objeto RegionInfo    
            //Creando una lista de todas las culturas.....
            CultureInfo[] cultInfoList = CultureInfo.GetCultures(CultureTypes.AllCultures);
            //Explorando todas las culturas (no todas retornan paises que se encuentran en RegionInfo            
            foreach (CultureInfo cultInfo in cultInfoList)
            {
                //Se puede generar una excepción por no corresponder un culture info LCID con 
                //un un código existente en RegInfo (por ejemplo Cuba) en ese caso se captura 
                //la excepción y continua el lazo
                try
                {
                    //Crear una clase reginfo para traer los nombres del país
                    reginfo = new RegionInfo(cultInfo.LCID);                //Se crea una reg info del pais
                    //Crear un ListItem para almacenar el nombre del país y el identificador de la cultura 
                    ListItem li = new ListItem(reginfo.DisplayName, cultInfo.LCID.ToString());
                    //Debido a que diferentes culture info pueden generar diferentes varias veces el
                    //mismo pais, verificar que el pais ya no se encuentre.
                    if (DDL1.Items.IndexOf(li) < 1)
                    { DDL1.Items.Add(li); }
                }
                catch //Captura de la excepción por falta de correspondencia de código
                {
                    ;
                }
            }
        }
    }

    protected void DDL1_SelectedIndexChanged(object sender, EventArgs e)
    {
        Decimal cifra;
        CultureInfo cultura;
        Int32 posicion;
        NumberFormatInfo formato = new CultureInfo(Convert.ToInt32(DDL1.SelectedValue)).NumberFormat;
        formato.NumberDecimalSeparator = ",";
        cifra = Convert.ToDecimal(txtMonto.Text);
        txtResultado.Text = cifra.ToString("N", formato);
    }
}