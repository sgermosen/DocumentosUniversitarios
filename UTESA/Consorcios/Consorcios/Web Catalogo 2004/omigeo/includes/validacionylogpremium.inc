<% if session("usuariopremium")<> "" then
	
	' Tomo los datos del suscriptor de la base de suscriptores
	Set conn = Server.CreateObject("ADODB.Connection")
  	conn.open "omicr3.ospymes","",""
 	sql = "SELECT * FROM results where usuario='" & session("usuariopremium") & "'"
	Set rs = Server.CreateObject("ADODB.Recordset")
	rs.CursorType = adOpenKeyset
	rs.LockType = adLockOptimistic
	rs.ActiveConnection = conn
	rs.Source = sql
	rs.Open 
	if not rs.bof then	
		if rs.fields("password").value= "admin" then
		'sin log porque soy administrador
		else
		sql = "SELECT * FROM ingresos"
		Set rs1 = Server.CreateObject("ADODB.Recordset")
		rs1.CursorType = adOpenKeyset
		rs1.LockType = adLockOptimistic
		rs1.ActiveConnection = conn
		rs1.Source = sql
		rs1.Open 
		rs1.addnew
		rs1.fields("Nombre")= rs.fields("nombre")
		rs1.fields("apellido")= rs.fields("apellido")	
		rs1.fields("dia")=date
		rs1.fields("hora")=time
		
		paginaingresada= lcase(Request.ServerVariables("PATH_INFO"))
		rs1.fields("paginaingresada")=  paginaingresada
						
		paginaanterior= lcase(Request.ServerVariables("HTTP_REFERER"))
		rs1.fields("paginaanterior")= paginaanterior
		
		navegador= lcase(Request.ServerVariables("HTTP_USER_AGENT"))
		if navegador <> "" then	
		rs1.fields("navegador")= navegador
		end if
					
		rs1.update
		rs1.close
		set rs1= nothing
		end if
	else
	' No fue posible encontrar el susciptor en la base de datos
	response.redirect "http://www.ospymes.com.ar/ospymes/default.asp"	
	end if 
	
	rs.close
	set rs= nothing
	conn.close
	
			
else

if session("usuario")<> "" then 
response.redirect "promocion.htm"
else 
response.redirect "../default.asp"
end if
end if
%>


