// http://www.phpmyvisites.net/ 
// License GNU/GPL (http://www.gnu.org/copyleft/gpl.html)
function pmv_log(pmv_site, pmv_url, pmv_pname, pmv_vars)
{
	function plugMoz(pmv_pl) {
		if (pmv_tm.indexOf(pmv_pl) != -1 && (navigator.mimeTypes[pmv_pl].enabledPlugin != null))
			return '1';
		return '0';
	}
	function plugIE(pmv_plug){
		pmv_find = false;
		document.write('<SCR' + 'IPT LANGUAGE=VBScript>\n on error resume next \n pmv_find = IsObject(CreateObject("' + pmv_plug + '"))</SCR' + 'IPT>\n');
		if (pmv_find) return '1';
		return '0';
	}
	var pmv_jav='0'; if(navigator.javaEnabled()) pmv_jav='1';
	var pmv_agent = navigator.userAgent.toLowerCase();
	var pmv_moz = (navigator.appName.indexOf("Netscape") != -1);
	var pmv_ie= (pmv_agent.indexOf("msie") != -1);
	var pmv_win = ((pmv_agent.indexOf("win") != -1) || (pmv_agent.indexOf("32bit") != -1));
	
	if (!pmv_win || pmv_moz){
		pmv_tm = '';
		for (var i=0; i < navigator.mimeTypes.length; i++)
			pmv_tm += navigator.mimeTypes[i].type.toLowerCase();
		var pmv_dir = plugMoz("application/x-director");
		var pmv_fla = plugMoz("application/x-shockwave-flash");
		var pmv_pdf = plugMoz("application/pdf");
		var pmv_qt = plugMoz("video/quicktime");
		var pmv_rea = plugMoz("audio/x-pn-realaudio-plugin");
		var pmv_wma = plugMoz("application/x-mplayer2");
	} else if (pmv_win && pmv_ie){
		var pmv_dir = plugIE("SWCtl.SWCtl.1");
		var pmv_fla = plugIE("ShockwaveFlash.ShockwaveFlash.1");
		var pmv_pdf = '0'; 
		if (plugIE("PDF.PdfCtrl.1") == '1' || plugIE('PDF.PdfCtrl.5') == '1' || plugIE('PDF.PdfCtrl.6') == '1') 
			pmv_pdf = '1';
		var pmv_qt = plugIE("QuickTimeCheckObject.QuickTimeCheck.1");
		var pmv_rea = plugIE("rmocx.RealPlayer G2 Control.1");
		var pmv_wma = plugIE("MediaPlayer.MediaPlayer.1");
	}
	
	var getvars='';
	for (var i in pmv_vars){
		if (!Array.prototype[i]){
			getvars = getvars + '&a_vars['+ escape(i) + ']' + "=" + escape(pmv_vars[i]);
		}
	}
	pmv_do = document; pmv_da = new Date();
	try {rtu = top.pmv_do.referrer;} catch(e) {
		try {rtu = pmv_do.referrer;} catch(E) {rtu = '';}
	}
	
	src = pmv_url;
	src += '?url='+escape(pmv_do.location)+'&pagename='+escape(pmv_pname)+getvars;
	src += '&id='+pmv_site+'&res='+screen.width+'x'+screen.height+'&col='+screen.colorDepth;
	src += '&h='+pmv_da.getHours()+'&m='+pmv_da.getMinutes()+'&s='+pmv_da.getSeconds();
	src += '&flash='+pmv_fla+'&director='+pmv_dir+'&quicktime='+pmv_qt+'&realplayer='+pmv_rea;
	src += '&pdf='+pmv_pdf+'&windowsmedia='+pmv_wma+'&java='+pmv_jav+'&ref='+escape(rtu);

	pmv_do.writeln('<img src="'+src+'" alt="phpMyVisites" style="border:0" />');
}
pmv_log(phpmyvisitesSite, phpmyvisitesURL, pagename, a_vars);