<%@ Page Language="C#" AutoEventWireup="true"  CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Untitled Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Label ID="lblCulturas" runat="server" Text="Culturas"></asp:Label><br />
        <asp:DropDownList ID="DDL1" runat="server" AutoPostBack="True" Width="221px" OnSelectedIndexChanged="DDL1_SelectedIndexChanged">
        </asp:DropDownList>&nbsp;<br />
        <br />
        <asp:Label ID="lblMonto" runat="server" Text="Ingrese un valor"></asp:Label><br />
        <asp:TextBox ID="txtMonto" runat="server">1843,15</asp:TextBox><br />
        <br />
        <asp:Label ID="lblResultado" runat="server" Text="Resultado"></asp:Label><br />
        <asp:TextBox ID="txtResultado" runat="server" ReadOnly="True"></asp:TextBox></div>
    </form>
</body>
</html>
