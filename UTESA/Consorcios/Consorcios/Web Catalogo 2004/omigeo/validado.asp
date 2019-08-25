<html>
<head>
<meta http-equiv="Content-Language" content="es-ar">
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
<!-- #include file="adovbs.inc" --> 
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<title>Validacion de usuarios</title>
</head>
<% set conn = Server.CreateObject("ADODB.Connection")
  	conn.open "omicr3.ospymes","",""
 	sql = "SELECT * FROM results where usuario='" & session("usuario") & "'"
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn
	rs.Source = sql
	rs.Open 
%> 
<body topmargin="0" leftmargin="0" link="#000080" vlink="#000080" bgcolor="#FFFFFF">
<table cellspacing="0" cellpadding="0" border="0">
  <tr>
    <td width="462" height="544" valign="top"> 
  <p style="margin-left: 1cm; margin-right: 1cm"><b><u><font face="Verdana, Arial, Helvetica, sans-serif" size="2" color="#105E9B">Estimado/a 
    <% =rs.fields("nombre").value &" " & rs.fields("apellido").value%>:</font></u></b></p>
  <p style="margin-left: 1cm; margin-right: 1cm"><font size="2" face="Verdana, Arial, Helvetica, sans-serif">Usted 
    ha sido validado correctemente y puede acceder libremente a los siguiente 
    servicios para suscriptores:</font></p>
      <ul>
        <li> 
          <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="aplicaciones.htm"><font color="#000080">Descarga 
            de aplicaciones</font></a><font color="#000080">: </font>Más de 50 
            aplicaciones desarrolladas en Office clasificadas según su área de 
            aplicación en la empresa, listas para utilizar. <b>Todas las semanas 
            se agregan nuevas aplicaciones</b><br>
            </font><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><br>
            </font> 
        </li>
      </ul>
  <p align="center" style="margin-left: 1cm; margin-right: 1cm"><font size="2" face="Verdana, Arial, Helvetica, sans-serif"><b>Envíenos 
    su sugerencia a <a href="mailto:sugerencias@ospymes.com.ar">sugerencias@ospymes.com.ar</a></b></font>
</td>
  </tr>
</table>
</body>
</html>
