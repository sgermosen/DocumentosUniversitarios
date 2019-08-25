// ------------------------------------------------------------------------------
//
// ---------------------------------------------------------------------
var CM_SESSION_KEY_KEY = "cmSessionKeyKey";
// ---------------------------------------------------------------------

// ALTE REFERENZEN SOLLTEN BALD ABGELÖST SEIN ////////////
function getSessionPair(loc) {
	return URL.getSessionPair(loc);
}

function getSessionHref() {
	return URL.getSessionHref();
}

function processLinkz(doc) {
	URL.processLinkz(doc);
}

function getSessionString() {
	return URL.getSessionString();
}

function jdecode(s) {
	return URL.jdecode(s);
}

function jencode(s) {
	return URL.jencode(s);
}
//////////////////////////////////////////////////////////
URL.buildURL = function(sURL) {
	if(sURL.indexOf(":") == -1) {
		var url = new URL(document.location.href);

		if (sURL.indexOf("./") == 0 || sURL.indexOf("../") == 0) {
			var idx = url.path.lastIndexOf("/");
			if (idx != -1) {
				url.path = url.path.substring(0, idx) + "/";
			}

			return (url.protocol + "://" + url.authority + url.path + sURL);
		} else {
			return (url.protocol + "://" + url.authority + sURL);
		}
	} else {
		return sURL;
	}
}
// ---------------------------------------------------------------------
URL.getSessionPair = function(loc) {
    try {
	var url;
	var sess_key = window.cmSessionKey;
	var sess_val = window.cmSessionValue;

	if (!loc)
		loc = document.location.href;

	if (!sess_key || !sess_val) {
		url = new URL(loc, true, true);
		sess_key = url.getParameter(CM_SESSION_KEY_KEY, "");
		sess_val = url.getParameter(sess_key, "");
	}

	return [sess_key, sess_val];
    } catch (e) {
	return [];
    }
}
// ---------------------------------------------------------------------
URL.getSessionHref = function() {
	var url = new URL(document.location.href, true, true);
	url.setSession();
	return url.toExternalForm();
}
// ---------------------------------------------------------------------
URL.processLinkz = function(doc) {
	if (!doc) doc = window.document;

	var sess_pair = getSessionPair();
	var sess_key = sess_pair[0];
	var sess_val = sess_pair[1];

	for (var i = 0 ; i < doc.links.length ; i++) {
		var a = doc.links[i];

		var newHref 	 = new URL(a.href, true, true);
		var sessionDummy = newHref.getParameter("*session*id*key*", "");

		if (sessionDummy == "*session*id*val*") {
			newHref.removeParameter("*session*id*key*");

			if (sess_key && sess_val) {
				newHref.setParameter(sess_key, sess_val, true);
				newHref.setParameter(CM_SESSION_KEY_KEY, sess_key, true);
			}

			a.href = newHref.toExternalForm();
		}
	}
}
// ---------------------------------------------------------------------
URL.getSessionString = function() {
	var sess_pair = getSessionPair();

	if (sess_pair[0] && sess_pair[1]) {
		return sess_pair[0] + "=" + sess_pair[1] + "&" + CM_SESSION_KEY_KEY + "=" + sess_pair[0];
	} else {
		return "";
	}
}

if (typeof(encodeURIComponent) == "undefined") {
	encodeURIComponent = function(s) {
		return escape(s);
	}
}
if (typeof(decodeURIComponent) == "undefined") {
	decodeURIComponent = function(s) {
		return unescape(s);
	}
}
// ---------------------------------------------------------------------
// -  Helper Funktionen  -----------------------------------------------
// ---------------------------------------------------------------------
URL.jdecode = function(s) {
	var re = /\+/g;
	s = s.replace(re, "%20");
	return decodeURIComponent(s);
}
// ---------------------------------------------------------------------
URL.deamplify = function(s) {
	var re = /&amp;/g;
	s = s.replace(re, "&");
	return s;
}
//------------------------------------------------------------------------------
//	Simuliert java.net.URLDecoder.encode()
URL.jencode = function(s) {
	var re1 = /\+/g;
	var re2 = /%20/g;
	var re3 = /'/g;
	s = encodeURIComponent(s);
	return s.replace(re1, "%2B").replace(re2, "+").replace(re3, "%27");
}
// ---------------------------------------------------------------------
// -  Allgemeine URL-Klasse  -------------------------------------------
// ---------------------------------------------------------------------
URL.prototype.set   		  	 = URL_set;
URL.prototype.debug 		  	 = URL_debug;
URL.prototype.isValidProtocol 	 = URL_isValidProtocol;
URL.prototype.toExternalForm  	 = URL_toExternalForm;
URL.prototype.toString  	  	 = URL_toExternalForm;
URL.prototype.parseQueryString 	 = URL_parseQueryString;
URL.prototype.getPrototypePair	 = URL_getPrototypePair;
URL.prototype.getQueryString 	 = URL_getQueryString;
URL.prototype.getParameter 		 = URL_getParameter;
URL.prototype.getParameterValues = URL_getParameterValues;
URL.prototype.getParameterNames  = URL_getParameterNames;
URL.prototype.setParameter	 	 = URL_setParameter;
URL.prototype.removeParameter	 = URL_removeParameter;
URL.prototype.setSession		 = URL_setSession;
URL.prototype.removeAllParams    = URL_removeAllParams;
// ---------------------------------------------------------------------
function URL(spec, skipSession, skipCacheControl) {
	spec = URL.buildURL(spec);

    this.protocol	= null;
    this.host		= null;
    this.port 		= -1;
    this.file		= null;
    this.query		= null;
    this.authority	= null;
    this.path		= null;
    this.userInfo	= null;
    this.ref		= null;
	this.qParams	= new Object();

	var i, limit, c;

	var original 	= spec;
	var start 		= 0;
	var newProtocol = null;
	var aRef 		= false;

	limit = spec.length;

	while ((limit > 0) && (spec.charAt(limit - 1) <= ' ')) {
		limit--;	//eliminate trailing whitespace
	}

	while ((start < limit) && (spec.charAt(start) <= ' ')) {
		start++;	// eliminate leading whitespace
	}

	if (spec.substr(start, 4).toLowerCase() == "url:") {
		start += 4;
	}

	if (start < spec.length && spec.charAt(start) == '#') {
		/* we're assuming this is a ref relative to the context URL.
		 * This means protocols cannot start w/ '#', but we must parse
		 * ref URL's like: "hello:there" w/ a ':' in them.
		 */
		aRef = true;
	}

	for (i = start ; !aRef && (i < limit) && ((c = spec.charAt(i)) != '/') ; i++) {

		if (c == ':') {
			var s = spec.substring(start, i).toLowerCase();

			if (this.isValidProtocol(s)) {
				newProtocol = s;
				start = i + 1;
			}

			break;
		}
	}


	// Only use our context if the protocols match.
	this.protocol = newProtocol;

	if (this.protocol == null) {
		//alert("no protocol: "+original);
	}

	i = spec.indexOf('#', start);

	if (i >= 0) {
		this.ref = spec.substring(i + 1, limit);
		limit = i;
	}

	parseURL(this, spec, start, limit);
	this.parseQueryString();
	//handler.parseURL(this, spec, start, limit);
	if (!skipSession) {
		this.setSession();
	}
	
	if (!skipCacheControl) {
		this.setParameter("cc", Math.random(), true);
	}
}
// ---------------------------------------------------------------------
function URL_set(protocol, host, port, authority, userInfo, path, query, ref) {
	this.protocol 	= protocol;
	this.host 		= host;
	this.port 		= port;
	this.file 		= query == null ? path : path + "?" + query;
	this.userInfo 	= userInfo;
	this.path 		= path;
	this.ref 		= ref;
	this.query 		= query;
	this.authority 	= authority;
}
// ---------------------------------------------------------------------
function URL_debug() {
	var debug = "protocol:  " + this.protocol + "\n"
			  + "host:      " + this.host + "\n"
			  + "port:      " + this.port + "\n"
			  + "file:      " + this.file + "\n"
			  + "userInfo:  " + this.userInfo + "\n"
			  + "path:      " + this.path + "\n"
			  + "ref:       " + this.ref + "\n"
			  + "query:     " + this.query + "\n"
			  + "authority: " + this.authority + "\n\n";

	var key;

	for (key in this.qParams) {
		var vals = this.qParams[key];

		debug += key + " -> [";

		if (!vals) {
			alert("missing: " + key);
			continue;
		}

		for (var i = 0 ; i < vals.length; i++) {
			debug += vals[i] + (i != (vals.length-1) ? "," : "");
		}

		debug += "]\n";
	}

	alert(debug);
}
// ---------------------------------------------------------------------
function URL_getParameter(key, defval) {
	if (!key)
		return defval;

	var toret = this.qParams[key];

	if (toret == null) {
		return defval;
	} else {
		return toret[0];
	}
}
// ---------------------------------------------------------------------
function URL_getParameterValues(key) {
	return this.qParams[key];
}
// ---------------------------------------------------------------------
function URL_getParameterNames() {
	var key;
	var keys = new Array();

	for (key in this.qParams) {
		keys[keys.length] = key;
	}

	return keys;
}
// ---------------------------------------------------------------------
function parseURL(u, spec, start, limit) {
	var protocol 	= u.protocol;
	var authority 	= u.authority;
	var userInfo 	= u.userInfo;
	var host 		= u.host;
	var port 		= u.port;
	var file 		= u.file;
	var ref 		= u.ref;	// This field has already been parsed

	var query 		= null;

	var isRelPath 	= false;
	var queryOnly 	= false;


	// FIX: should not assume query if opaque
	// Strip off the query part
	if (start < limit) {
		var queryStart = spec.indexOf('?');
		queryOnly = (queryStart == start);

		if (queryStart != -1) {
			query = spec.substring(queryStart+1, limit);

			if (limit > queryStart)
				limit = queryStart;

			spec = spec.substring(0, queryStart);
		}
	}

	var i = 0;
	// Parse the authority part if any
	if ((start <= limit - 2) && (spec.charAt(start) == '/') && (spec.charAt(start + 1) == '/')) {
		start += 2;
		i = spec.indexOf('/', start);
		if (i < 0) {
			i = spec.indexOf('?', start);

			if (i < 0)
				i = limit;
		}

		host = authority = spec.substring(start, i);

		var ind = authority.indexOf('@');

		if (ind != -1) {
			userInfo = authority.substring(0, ind);
			host = authority.substring(ind+1);
		}

		ind = host.indexOf(':');
		port = -1;
		if (ind >= 0) {
			// port can be null according to RFC2396
			if (host.length > (ind + 1)) {
				port = parseInt(host.substring(ind + 1));
			}
			host = host.substring(0, ind);
		}

		start = i;
		// If the authority is defined then the path is defined by the
		// spec only; See RFC 2396 Section 5.2.4.
		if (authority != null && authority.length > 0)
			file = "";
	}

	if (host == null) {
		host = "";
	}

	// Parse the file path if any
	if (start < limit) {
		if (spec.charAt(start) == '/') {
			file = spec.substring(start, limit);
		} else if (file != null && file.length > 0) {
			isRelPath = true;
			var ind = file.lastIndexOf('/');

			var seperator = "";

			if (ind == -1 && authority != null)
				seperator = "/";

			file = file.substring(0, ind + 1) + seperator + spec.substring(start, limit);
		} else {
			var seperator = (authority != null) ? "/" : "";
			file = seperator + spec.substring(start, limit);
		}
	} else if (queryOnly && file != null) {
		var ind = file.lastIndexOf('/');
		if (ind < 0)
			ind = 0;
		file = file.substring(0, ind) + "/";
	}

	if (file == null)
		file = "";

	if (isRelPath) {
		// Remove embedded /./
		while ((i = file.indexOf("/./")) >= 0) {
			file = file.substring(0, i) + file.substring(i + 2);
		}
		// Remove embedded /../
		while ((i = file.indexOf("/../")) >= 0) {
			if ((limit = file.lastIndexOf('/', i - 1)) >= 0) {
				file = file.substring(0, limit) + file.substring(i + 3);
			} else {
				file = file.substring(i + 3);
			}
		}
		// Remove trailing ..
		while (file.substring(file.length - 3, file.length) == "/..") {
		//while (file.endsWith("/..")) {
			i = file.indexOf("/..");
			if ((limit = file.lastIndexOf('/', i - 1)) >= 0) {
				file = file.substring(0, limit+1);
			} else {
				file = file.substring(0, i);
			}
		}
		// Remove trailing .
		if (file.substring(file.length - 2, file.length) == "/.")
		//if (file.endsWith("/."))
			file = file.substring(0, file.length() -1);
	}

	setURL(u, protocol, host, port, authority, userInfo, file, query, ref);
}
// ---------------------------------------------------------------------
function setURL(u, protocol, host, port, authority, userInfo, path, query, ref) {
	u.set(u.protocol, host, port, authority, userInfo, path, query, ref);
}
// ---------------------------------------------------------------------
function URL_isValidProtocol(protocol) {
	return true;
	/*var len = protocol.length;

	if (len < 1)
		return false;

    var c = protocol.charAt(0);

	//if (!Character.isLetter(c))
	if (!isNaN(c))
		return false;

	for (var i = 1 ; i < len ; i++) {
	    c = protocol.charAt(i);

	    if (!Character.isLetterOrDigit(c) && c != '.' && c != '+' && c != '-') {
			return false;
	    }
	}
	return true;*/
}
// ---------------------------------------------------------------------
function URL_setParameter(key, val, replace) {
	if (!key)
		return;

	if (replace || this.qParams[key] == null) {
		this.qParams[key] = new Array();
	}

	this.qParams[key][this.qParams[key].length] = val;
}
// ---------------------------------------------------------------------
function URL_removeParameter(key) {
	var _key;
	var newQParams = new Object();

	for (_key in this.qParams) {
		if (_key != key) {
			newQParams[_key] = this.qParams[_key];
		}
	}

	this.qParams = newQParams;
}
// ---------------------------------------------------------------------
function URL_removeAllParams() {
	var newQParams = new Object();
	this.qParams = newQParams;
}
// ---------------------------------------------------------------------
function URL_parseQueryString() {
	var s;

	if (this.query == null || this.query.length == 0)
		return;
	else
		s = "&" + this.query;

	var idx2;
	var idx = s.indexOf("&");

	while (idx != -1) {
		var kvPair = null;
		var kvPos = 0;

		idx2 = s.indexOf("&", idx+1);

		if (idx2 != -1) {
			kvPair = s.substring(idx+1, idx2);
		} else {
			kvPair = s.substr(idx+1);
		}

		kvPos = kvPair.indexOf("=");

		if (kvPos != -1) {
			var key = kvPair.substring(0, kvPos);
			var val = kvPair.substr(kvPos+1);

			this.setParameter(key, val);
		}

		idx = idx2;
	}
}
// ---------------------------------------------------------------------
function URL_getQueryString() {
	var query = "";
	var key;

	for (key in this.qParams) {
		var vals = this.qParams[key];

		for (var i = 0 ; i < vals.length ; i++) {
			if (query.length == 0) {
				query += key + "=" + vals[i];
			} else {
				query += "&" + key + "=" + vals[i];
			}
		}
	}
	
	return query;
}

// ---------------------------------------------------------------------
function URL_toExternalForm(skipBeyondQuery) {
	var result = this.protocol;

	result += ":";

	if (this.authority != null && this.authority.length > 0) {
		result += "//";
		result += this.authority;
	}

	if (this.path != null) {
		result += this.path;
	}

	if (!skipBeyondQuery) {
		
		var query = this.getQueryString();
	
		if (query.length > 0) {
			result += "?" + query;
		}
	
		if (this.ref != null) {
			result += "#";
			result += this.ref;
		}
	}

	return result;
}
// ---------------------------------------------------------------------
function URL_setSession() {
	var sess_pair = getSessionPair();

	if (sess_pair[0] && sess_pair[1]) {
		this.setParameter(sess_pair[0], sess_pair[1], true);
		this.setParameter(CM_SESSION_KEY_KEY, sess_pair[0], true);

		return true;
	}

	return false;
}
// ---------------------------------------------------------------------
function URL_getPrototypePair() {
	return {
		url        : this.toExternalForm(true),
		parameters : this.getQueryString()
	}	
}
// ---------------------------------------------------------------------
