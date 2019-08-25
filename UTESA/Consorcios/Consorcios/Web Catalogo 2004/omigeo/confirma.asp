<html>
<!-- #include file="../adovbs.inc" --> 
<head>
<meta http-equiv="Content-Language" content="es-ar">
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
<meta name="GENERATOR" content="Microsoft FrontPage 4.0">
<meta name="ProgId" content="FrontPage.Editor.Document">
<title>Confirmacion de la suscripcion</title>
</head>
<body bgcolor="#FFFFFF" topmargin="0" leftmargin="0" link="#000080" vlink="#000080" text="#000000">
<table cellspacing="0" cellpadding="0" border="0">
  <tr>
    <td width="1" height="2" valign="top"></td>
    <td width="195" height="2" valign="top"></td>
    <td width="1" height="2" valign="top"></td>
    <td width="82" height="2" valign="top"></td>
    <td width="9" height="2" valign="top"></td>
    <td width="31" height="2" valign="top"></td>
    <td width="1" height="2" valign="top"></td>
    <td width="22" height="2" valign="top"></td>
    <td width="1" height="2" valign="top"></td>
    <td width="353" height="2" valign="top"></td>
    <td width="1" height="2" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="143" valign="top"></td>
    <td width="696" height="143" colspan="10" valign="top"><% 
   
   ' Armo nombre de usuario
	
	user=left(request.form("apellido"),9) & request.form("nombre")
	user=lcase(user)
	user=replace(user,"á","a")
	user=replace(user,"é","e")
	user=replace(user,"í","i")
	user=replace(user,"ó","o")
	user=replace(user,"ú","u")
	user=replace(user," ","")
	user=replace(user,"ñ","n")
	user=replace(user,"'","")
	user=replace(user,"ü","u")
	user=replace(user,".","")
	
	user1=user
	user=left(user,10)

   
   ' Alta en la base de cursos
   
   Set conn = Server.CreateObject("ADODB.Connection")
   conn.open "omicr3.ospymes","",""
   	sql = "SELECT * FROM results where usuario='" & user & "'"
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn
	rs.Source = sql
	rs.Open 
	
	
	
	if not rs.bof then
		maximo=10
		if len(user1) > 10 then
			maximo=len(user1)
		end if
		i=1
		do while i<maximo and not rs.bof
			user=left(user,9) & mid(user1,i,1)
		   	rs.close
		   	sql = "SELECT * FROM results where usuario='" & user & "'"
			rs.Source = sql
			rs.Open 
			i=i+1
	 	loop
	
	if i>len(user1) then
		' enviar mail a administracion para que le pongan un nombre al usuario
		user="----"
	end if
	
	end if
  
   rs.addnew
	
	rs.fields("nombre")=request.form("nombre")
	rs.fields("apellido")=request.form("apellido")
	rs.fields("email")=request.form("email")
	if request.form("empresa") <> "" then
	rs.fields("empresa")=request.form("empresa")
	else
	end if
	if request.form("cargo") <> "" then
	rs.fields("cargo")=request.form("cargo")
	else
	end if
	rs.fields("usuario")=lcase(user)
	rs.fields("password")=lcase(left(user,9)) & "1"
	if request.form("areas") <> "" then
	rs.fields("areas")=request.form("areas")
	else
	end if
	if request.form("otras") <> "" then
	rs.fields("otras")=request.form("otras")
	else
	end if
	rs.fields("fecha")=date
	rs.update
	id= rs.fields("id")
	
	rs.close
	conn.close
	

	Set conn1 = Server.CreateObject("ADODB.Connection")
  	conn1.open "omicr3.ospymescil","",""
	sql = "SELECT * FROM alumnos "
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn1
	rs.Source = sql
	rs.Open 


	rs.addnew
	
	rs.fields("nombre")= request.form("nombre") &" " & request.form("apellido")
	rs.fields("email")=request.form("email")
	if request.form("empresa") <> "" then
	rs.fields("empresa")=request.form("empresa")
	else
	rs.fields("empresa")= "S/inf"
	end if
	rs.fields("usuario")=lcase(user)
	rs.fields("clave")=lcase(left(user,9)) & "1"
	rs.fields("vendedor")= "1"
	rs.fields("tipodoc")= "DNI"
	rs.fields("documento")=  id
	rs.fields("fechaalta")=date
	rs.update
	nombre= rs.fields("id")
	rs.close
	
	' inscripcion a los curos en CIL
	
	sql = "SELECT * FROM inscripciones "
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn1
	rs.Source = sql
	rs.Open 


	rs.addnew
	rs.fields("curso")= "1"
	rs.fields("alumno")= nombre
	rs.fields("Vendedor")= "1"
	rs.fields("fecha")=date
	rs.update
	
	rs.addnew
	rs.fields("curso")= "2"
	rs.fields("alumno")= nombre
	rs.fields("Vendedor")= "1"
	rs.fields("fecha")=date
	rs.update

	
	conn1.close



' Envio mail al alumno
	mensaje= "Estimado/a " & request.form("nombre") &" " & request.form("apellido")
   	mensaje=mensaje &vbcrlf&vbcrlf&"Bienvenido/a a Ospymes" & vbcrlf
	mensaje=mensaje &  " " & vbcrlf
   	mensaje=mensaje &  "Su nombre de usuario es: "& lcase(user)&vbcrlf
  	 mensaje=mensaje & "Su password es: " & lcase(left(user,9)) & "1" &vbcrlf
   	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje & "Para visitar nuestro sitio, ingrese en http://www.ospymes.com.ar"
	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje & "Por cualquier consulta o sugerencia, por favor escribanos a mailto:info@ospymes.com.ar" 
	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje &  " " & vbcrlf
	mensaje=mensaje & "Cordialmente," & vbcrlf & "Omicron System Division PyMEs"


	Set Mailer = Server.CreateObject ("SMTPsvg.Mailer")
	Mailer.FromName = "Administracion Ospymes"
	Mailer.FromAddress = "informacion@ospymes.com.ar"
	Mailer.AddRecipient request.form("nombre") &" " & request.form("apellido"), request.form("email")
	Mailer.Subject = "Suscripcion a Ospymes "
   	Mailer.BodyText = mensaje
	Mailer.RemoteHost = "mail.rapidsite.net"
	Mailer.SendMail

%> 
      <p align="center"><b><font face="Verdana, Arial, Helvetica, sans-serif" color="#006699" size="2">Bienvenido 
        a la comunidad PyME Ospymes</font></b> </p>
  <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><b>Estimado&nbsp;<%=request.form("nombre")%> 
    :</b></font></p>
  <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2">Usted 
    ya puede acceder a todos nuestros servicios utilizando la siguiente información:</font></p></td>
  </tr>
  <tr>
    <td width="1" height="1" valign="top"></td>
    <td width="195" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="82" height="26" rowspan="2" valign="middle" bgcolor="#FFFFFF"><font size="2" face="Arial"><b><font face="Verdana, Arial, Helvetica, sans-serif">Usuario</font></b></font></td>
    <td width="9" height="1" valign="top"></td>
    <td width="31" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="22" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="353" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="25" valign="top"></td>
    <td width="195" height="25" valign="top"></td>
    <td width="1" height="25" valign="top"></td>
    <td width="9" height="25" valign="top"></td>
    <td width="31" height="25" valign="top"></td>
    <td width="23" height="26" colspan="2" rowspan="2" valign="top" bgcolor="#FFFFFF"><font face="Arial" size="2"><% =lcase(user) %> 
  </font></td>
    <td width="1" height="25" valign="top"></td>
    <td width="353" height="25" valign="top"></td>
    <td width="1" height="25" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="1" valign="top"></td>
    <td width="195" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="82" height="1" valign="top"></td>
    <td width="9" height="1" valign="top"></td>
    <td width="31" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="353" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="11" valign="top"></td>
    <td width="195" height="11" valign="top"></td>
    <td width="1" height="11" valign="top"></td>
    <td width="82" height="11" valign="top"></td>
    <td width="9" height="11" valign="top"></td>
    <td width="31" height="11" valign="top"></td>
    <td width="1" height="11" valign="top"></td>
    <td width="22" height="11" valign="top"></td>
    <td width="1" height="11" valign="top"></td>
    <td width="353" height="11" valign="top"></td>
    <td width="1" height="11" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="1" valign="top"></td>
    <td width="195" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="82" height="1" valign="top"></td>
    <td width="9" height="1" valign="top"></td>
    <td width="31" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="23" height="26" colspan="2" rowspan="2" valign="top" bgcolor="#FFFFFF"><font face="Arial" size="2"><% =lcase(left(user,9)) & "1" %> 
  </font></td>
    <td width="353" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="25" valign="top"></td>
    <td width="195" height="25" valign="top"></td>
    <td width="92" height="26" colspan="3" rowspan="2" valign="middle" bgcolor="#FFFFFF"><font face="Arial" size="2"><b><font face="Verdana, Arial, Helvetica, sans-serif">Password</font></b></font></td>
    <td width="31" height="25" valign="top"></td>
    <td width="1" height="25" valign="top"></td>
    <td width="353" height="25" valign="top"></td>
    <td width="1" height="25" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="1" valign="top"></td>
    <td width="195" height="1" valign="top"></td>
    <td width="31" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="22" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
    <td width="353" height="1" valign="top"></td>
    <td width="1" height="1" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="30" valign="top"></td>
    <td width="195" height="30" valign="top"></td>
    <td width="1" height="30" valign="top"></td>
    <td width="82" height="30" valign="top"></td>
    <td width="9" height="30" valign="top"></td>
    <td width="31" height="30" valign="top"></td>
    <td width="1" height="30" valign="top"></td>
    <td width="22" height="30" valign="top"></td>
    <td width="1" height="30" valign="top"></td>
    <td width="353" height="30" valign="top"></td>
    <td width="1" height="30" valign="top"></td>
  </tr>
  <tr>
    <td width="696" height="554" colspan="10" valign="top"> 
      <p align="center" style="border-bottom-style: solid; border-bottom-width: 1; margin-left: 10; margin-right: 10"><b><font face="Verdana, Arial, Helvetica, sans-serif" color="#006699" size="2">Servicios 
        gratuitos para suscriptores</font></b> 
      <ul>
    <li> 
      <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="../Aplicaciones/default.asp"><font color="#000080">Descarga 
        de aplicaciones</font></a><font color="#000080">: </font>Más de 30 aplicaciones 
        desarrolladas en Office clasificadas según su área de aplicación en la 
        empresa, listas para utilizar. <b>Todas las semanas se agregan nuevas 
        aplicaciones</b><br>
        </font>
    </li>
    <li> 
      <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="../foros/Default.htm"><font color="#000080">Foros 
        de Discusión</font></a><font color="#000080">: </font>Un lugar para que 
        los miembros de la comunidad puedan intercambiar opiniones sobre diversos 
        temas relacionados a la gestión de las Pymes. <b>Los foros cuentan con 
        la paricipación activa de nuestros especialistas que contestán todas sus 
        consultas</b>.<br>
        </font>
    </li>
    <li> 
      <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="../cil/verifica.asp"><font color="#000080">Cursos 
        interactivo</font></a><font color="#000080"><a href="../cil/verifica.asp">:</a> 
        </font>Usted puede realizar cursos interactivos desde su casa, <b>con 
        la posibilidad de realizar consultas a nuestros tutores..</b></font>
    </li>
  </ul>
  <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font size="2" face="Verdana, Arial, Helvetica, sans-serif" color="#006699">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
    <u><b>Nuevos Servicios:</b></u></font> 
  <ul>
    <li> 
      <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="../Listas/altaempresa.asp">Su 
        empresa en el directorio de Empresas:</a> Ingrese los datos de su empresa 
        en nuestra catrtelera para <b>que todos los visitantes lo conozcan</b>, 
        y puedan realizarle consultas directamente desde nuestra página!.&nbsp; 
        <br>
        </font>
    </li>
    <li> 
      <p align="left" style="margin-left: 1cm; margin-right: 1cm"><font face="Verdana, Arial, Helvetica, sans-serif" size="2"><a href="../Listas/default.asp">Consulte 
        el Directorio de empresas</a><font color="#105E9B">:</font> Todas las 
        empresas divididas por rubros para que usted pueda contactarlas y consultar 
        su lista de precios. <br>
        </font>
    </li>
          </ul>
          
  <p align="center" style="margin-left: 1cm; margin-right: 1cm"><font size="1" face="Arial"><b><font face="Verdana, Arial, Helvetica, sans-serif">Envíenos 
    su sugerencia a <a href="mailto:sugerencias@ospymes.com.ar">sugerencias@ospymes.com.ar</a></font></b></font></td>
    <td width="1" height="554" valign="top"></td>
  </tr>
  <tr>
    <td width="1" height="1" valign="top"><img width="1" height="1" src="transparent.gif"></td>
    <td width="195" height="1" valign="top"><img width="195" height="1" src="transparent.gif"></td>
    <td width="1" height="1" valign="top"><img width="1" height="1" src="transparent.gif"></td>
    <td width="82" height="1" valign="top"><img width="82" height="1" src="transparent.gif"></td>
    <td width="9" height="1" valign="top"><img width="9" height="1" src="transparent.gif"></td>
    <td width="31" height="1" valign="top"><img width="31" height="1" src="transparent.gif"></td>
    <td width="1" height="1" valign="top"><img width="1" height="1" src="transparent.gif"></td>
    <td width="22" height="1" valign="top"><img width="22" height="1" src="transparent.gif"></td>
    <td width="1" height="1" valign="top"><img width="1" height="1" src="transparent.gif"></td>
    <td width="353" height="1" valign="top"><img width="353" height="1" src="transparent.gif"></td>
    <td width="1" height="1" valign="top"><img width="1" height="1" src="transparent.gif"></td>
  </tr>
</table>
</body>
</html>
