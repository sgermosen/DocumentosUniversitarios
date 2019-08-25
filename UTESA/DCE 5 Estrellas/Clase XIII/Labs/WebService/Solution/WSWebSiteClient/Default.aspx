<%@ Page Language="C#" AutoEventWireup="true"  CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Untitled Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:ObjectDataSource ID="productsDataSource" Runat="server" SelectMethod="GetAllProducts"
            TypeName="ProductWS.Service">
        </asp:ObjectDataSource>
        <asp:GridView ID="GridView1" Runat="server" DataSourceID="productsDataSource">
        </asp:GridView>&nbsp;
    
    </div>
    </form>
</body>
</html>
