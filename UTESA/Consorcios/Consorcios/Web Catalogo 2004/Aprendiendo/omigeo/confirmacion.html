<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<!-- #include file="adovbs.inc" --><% 
	' tomo la pagina de destino en caso de que sea validado el suscriptor
	pagina= request.form("pagina")
	
	' Abro la conexion a la base de suscriptores
   	dim conn
   	Set conn = Server.CreateObject("ADODB.Connection")
  	conn.open "omicr3.ospymes","",""
 	
 	' verifico si es un usuario premium
 	sql = "SELECT * FROM premium where usuario='" & request.form("usuario") & "'"
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn
	rs.Source = sql
	rs.Open 
   	if not rs.bof then ' Existe el suscriptor'
		if rs.fields("password").value=request.form("password") then 
		' Es suscriptor premium
			session("usuariopremium")= request.form("usuario")
			' Lo redirecciono a la pagina que solicito
			
		else
		' Es suscriptor pero escribio una contraseña equivocada
		end if
	else
	end if
	rs.close
	
	
	' Verifico si es un suscriptor gratuito
	
 	sql = "SELECT * FROM results where usuario='" & request.form("usuario") & "'"
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn
	rs.Source = sql
	rs.Open 

	
	if not rs.bof then ' Existe el alumno'
		if rs.fields("password").value=request.form("password") then 'alumno validado
			'Creo la session de usuario gratuito y lo redirecciono a la pagina que solicito
			session("usuario")= request.form("usuario")
			response.redirect pagina
		else
		end if
	else
	end if
	rs.close
	conn.close
	%><HTML><HEAD><TITLE>Registración de usuarios</TITLE>
<META http-equiv=Content-Language content=es-ar>
<META http-equiv=Content-Type content="text/html; charset=windows-1252">
<META content="MSHTML 5.50.4522.1800" name=GENERATOR>
<META content=FrontPage.Editor.Document name=ProgId></HEAD>
<BODY text=#ffffff vLink=#000080 link=#ff0033 bgColor=#336699 leftMargin=0 
topMargin=0>
<TABLE cellSpacing=0 cellPadding=0 align=center border=0>
  <TBODY>
  <TR>
    <TD vAlign=top width=110 height=3></TD>
    <TD vAlign=top width=200 height=3></TD>
    <TD vAlign=top width=145 height=3></TD></TR>
  <TR>
    <TD vAlign=top width=110 height=200></TD>
    <TD vAlign=top width=200 height=200><IMG height=192 
      src="confirmacion_archivos/logocfinal.gif" width=200></TD>
    <TD vAlign=top width=145 height=200></TD></TR>
  <TR>
    <TD vAlign=top width=455 colSpan=3 height=32>
      <DIV align=center><FONT face=Arial><FONT 
      face="Verdana, Arial, Helvetica, sans-serif"><B><FONT color=#ff0000 
      size=2>Su pedido ha sido recibido 
      existosamente</FONT></B></FONT></FONT></DIV></TD></TR>
  <TR>
    <TD vAlign=top width=110 height=1><IMG height=1 
      src="confirmacion_archivos/transparent.gif" width=110></TD>
    <TD vAlign=top width=200 height=1><IMG height=1 
      src="confirmacion_archivos/transparent.gif" width=200></TD>
    <TD vAlign=top width=145 height=1><IMG height=1 
      src="confirmacion_archivos/transparent.gif" 
width=145></TD></TR></TBODY></TABLE></BODY></HTML>
