<%	

Set conn = Server.CreateObject("ADODB.Connection")
conn.open "omicr3.ospymes","",""

if session("usuario") <> "" then

	
 	sql = "SELECT * FROM results where usuario='" & session("usuario") & "'"
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
		if paginaingresada <> "" then
		rs1.fields("paginaingresada")=  paginaingresada
		else
		end if
		
		paginaanterior= lcase(Request.ServerVariables("HTTP_REFERER"))
		if paginaanterior <> "" then
		rs1.fields("paginaanterior")= paginaanterior
		else
		end if
		
		navegador= lcase(Request.ServerVariables("HTTP_USER_AGENT"))
		if navegador <> "" then	
		rs1.fields("navegador")= navegador
		end if
					
		rs1.update
		rs1.close
		set rs1= nothing
		end if
	else
	
	end if 
	
	rs.close
	set rs= nothing
	conn.close
	
			
else
 	
		sql = "SELECT * FROM ingresos"
		Set rs = Server.CreateObject("ADODB.Recordset")
		rs.CursorType = adOpenKeyset
		rs.LockType = adLockOptimistic
		rs.ActiveConnection = conn
		rs.Source = sql
		rs.Open 
		rs.addnew
				
		rs.fields("dia")=date
		rs.fields("hora")=time
		paginaingresada=lcase(Request.ServerVariables("PATH_INFO"))
		if paginaingresada <> "" then
		rs.fields("paginaingresada")=  paginaingresada
		end if
		paginaanterior= lcase(Request.ServerVariables("HTTP_REFERER"))
		if paginaanterior <> "" then	
		rs.fields("paginaanterior")= paginaanterior
		end if
		navegador= lcase(Request.ServerVariables("HTTP_USER_AGENT"))
		if navegador <> "" then	
		rs.fields("navegador")= navegador
		end if

		rs.update
		rs.close
		set rs= nothing
		
	conn.close

end if	
%>

