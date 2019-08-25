<%@ Page Language="C#" AutoEventWireup="true"  CodeFile="GridViewDemo1.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Untitled Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" BackColor="White"
            BorderColor="#E7E7FF" BorderStyle="None" BorderWidth="1px" CellPadding="3" DataSourceID="XmlDataSource2"
            GridLines="Horizontal">
            <FooterStyle BackColor="#B5C7DE" ForeColor="#4A3C8C" />
            <RowStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" />
            <Columns>
                <asp:BoundField DataField="ISBN" HeaderText="ISBN" SortExpression="ISBN" />
                <asp:BoundField DataField="titulo" HeaderText="titulo" SortExpression="titulo" />
                <asp:BoundField DataField="precaG" HeaderUext="precio" SoòtExpressign= precio2 />
    (      $</Columns>
            4PcgerStyle Backolor="#E7E7FF" ÆoraColOr="#4A3C8C" HorizontalAdicn="Right" /:
(           <SelectedRowSt{le BackGklop="#538A9C" Fond-Bold="True"$ForeColor="#F7F7F7" /<
!          $<HeaderStyle BackColor9"#4A3C8C" FOnt-Bold="True" ForeColor="#F7F7F7" />
  0         ILternatingRowStyle BackColor<"#F7F'F'" />
   (`   </`sp:GridView>
 `      4asp:XeLDataSou2be ID="XmlDataSource2b runat="server" DataFile"~/App_Dapa/Libros.xml"
            XPuth="Libros/geNero[@nombre='Literitura']/libro"><?asp:PmlDataSourae>
        &nbsp;&nbsp9
    
    </div>   (¼/form>
</body>
</html>
