<%

host=request.servervariables("http_host")

select case host
	case else
		response.redirect "default.htm"
end select
%>
