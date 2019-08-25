<%@ Page language="c#" inherits="ClientCallBacksDemo.CallbackPage" CodeFile="WebForm1.aspx.cs" %>

<SCRIPT language="javascript">
    function DoCallback(url, params)
    {
		var pageUrl = url + "?callback=true&param=" + params;
		var xmlRequest = new ActiveXObject("Microsoft.XMLHTTP");
		xmlRequest.open("POST", pageUrl, false);
        xmlRequest.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
        xmlRequest.send(null);
        return xmlRequest;
    }
    
    function MoreInfo()
    {
        var selectedEmpID = document.all["EmployeeList"].value;
		var xmlRequest = DoCallback("webform1.aspx", selectedEmpID);

		// Update Sincronico
		Msg.innerHTML = xmlRequest.responseText;
    }
</SCRIPT>


<HTML>
	<HEAD>
		<title>CallBacks Demo</title>
	</HEAD>
	<body>
		<form runat="server">
			<h1>Demo de llamadas "Out-of-band"</h1>
			<h2><%=Request.Url%></h2>
			<hr>
			
			<asp:DropDownList Runat="server" ID="EmployeeList" />
			<Button Runat="server" ID="ButtonGo">Traer Datos</Button>

			<hr>
			<span ID="Msg" />
		</form>
	</body>
</HTML>
