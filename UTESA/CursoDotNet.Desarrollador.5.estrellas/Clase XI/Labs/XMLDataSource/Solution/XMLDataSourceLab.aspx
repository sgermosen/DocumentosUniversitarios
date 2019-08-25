<%@ Page Language="C#" %>
<html>
<body>
  <form id="Form1" runat="server">

    <h1>Libros</h1>

    <asp:XmlDataSource id="MySource" DataFile="~/App_Data/Libros.xml" 
       XPath="Libros/genero[@nombre='Literatura']/libro" runat="server"/>

    <asp:DataList id="MyDataList" DataSourceId="MySource" runat="server">
      <ItemTemplate>
        <table>
          <tr>
            <td>
              <h4><%# Eval("titulo") %></h4>
              <b>ISBN:</b> <%# Eval("ISBN") %><br>
              <b>Precio:</b> <%# Eval("precio") %><br>
            </td>
          </tr>
        </table>
      </ItemTemplate>
    </asp:DataList>


  </form>
</body>
</html>
