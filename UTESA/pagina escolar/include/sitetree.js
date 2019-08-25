/* [nodename, id, name, navigationtext, href, isnavigation, childs[], templatename] */

if (typeof(decodeURIComponent) == 'undefined') {
  decodeURIComponent = function(s) {
    return unescape(s);
  }
}

function jdecode(s) {
    s = s.replace(/\+/g, "%20")
    return decodeURIComponent(s);
}

var POS_NODENAME=0;
var POS_ID=1;
var POS_NAME=2;
var POS_NAVIGATIONTEXT=3;
var POS_HREF=4;
var POS_ISNAVIGATION=5;
var POS_CHILDS=6;
var POS_TEMPLATENAME=7;
var theSitetree=[ 
	['PAGE','4655',jdecode('Inicio'),jdecode(''),'/4655.html','true',[],''],
	['PAGE','4598',jdecode('Tecnolog%C3%ADa+y+Educaci%C3%B3n'),jdecode(''),'/4598.html','true',[],''],
	['PAGE','4709',jdecode('Productos'),jdecode(''),'/4709/index.html','true',[ 
		['PAGE','20011',jdecode('Aula+Inteligente'),jdecode(''),'/4709/20011.html','true',[],''],
		['PAGE','20020',jdecode('Talleres'),jdecode(''),'/4709/20020.html','true',[],''],
		['PAGE','20029',jdecode('Escuela+Net'),jdecode(''),'/4709/20029.html','true',[],''],
		['PAGE','22401',jdecode('Mobiliario+Escolar'),jdecode(''),'/4709/22401.html','true',[],'']
	],''],
	['PAGE','4736',jdecode('Noticias'),jdecode(''),'/4736.html','true',[],''],
	['PAGE','20775',jdecode('Cont%C3%A1ctenos'),jdecode(''),'/20775.html','true',[],'']];
var siteelementCount=9;
theSitetree.topTemplateName='Card';
theSitetree.paletteFamily='669900';
theSitetree.keyvisualId='-1';
theSitetree.keyvisualName='keyv.jpg';
theSitetree.fontsetId='427';
theSitetree.graphicsetId='481';
theSitetree.contentColor='666666';
theSitetree.contentBGColor='FFFFFF';
var localeDef={
  language: 'es',
  country: 'ES'
};
var theTemplate={
				name: 			'Card',
				paletteFamily: 	'669900',
				keyvisualId: 	'-1',
				keyvisualName: 	'keyv.jpg',
				fontsetId: 		'427',
				graphicsetId: 	'481',
				contentColor: 	'666666',
				contentBGColor: 'FFFFFF',
				hasFlashNavigation: 'false',
				hasFlashLogo: 	'false',
				hasFlashCompanyname: 'false',
				hasFlashElements: 'false',
				hasCompanyname: 'false',
				a_color: 		'FFFFFF',
				b_color: 		'FFFFFF',
				c_color: 		'FFFFFF',
				d_color: 		'FFFFFF',
				e_color: 		'FFFFFF',
				f_color: 		'FFFFFF',
				hasCustomLogo: 	'true',
				contentFontFace:'Verdana, Arial, Helvetica, sans-serif',
				contentFontSize:'12',
				useFavicon:     'false'
			  };
var webappMappings = {};
webappMappings['1006']=webappMappings['1006-1006']={
webappId:    '1006',
documentId:  '4655',
internalId:  '1006',
customField: '1006'
};
webappMappings['7008']=webappMappings['7008-3940']={
webappId:    '7008',
documentId:  '20775',
internalId:  '3940',
customField: 'language:es;country:ES;'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '4655',
internalId:  '',
customField: '20081006-131115'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '4598',
internalId:  '',
customField: '20071128-133524'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '4709',
internalId:  '',
customField: '20081125-221046'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '20011',
internalId:  '',
customField: '20080903-025720'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '20020',
internalId:  '',
customField: '20080903-040742'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '20029',
internalId:  '',
customField: '20080903-025828'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '22401',
internalId:  '',
customField: '20080410-113046'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '4736',
internalId:  '',
customField: '20080903-025956'
};
webappMappings['5000']=webappMappings['5000-']={
webappId:    '5000',
documentId:  '20775',
internalId:  '',
customField: '20071128-123429'
};
var canonHostname = 'diywk00.verio.stngva01.us.diy-servers.net';
var accountId     = 'AVEC10INX2VR';
var companyName   = 'INTEED%2C+Innovaci%C3%B3n+y+tecnolog%C3%ADa+educativa';
var htmlTitle	  = 'INTEED%2C+Innovaci%C3%B3n+y+Tecnolog%C3%ADa+Educativa';
var metaKeywords  = 'aula+inteligente+inteed++escuelanet++capacitacion+personal+docente+Alberto+Fierro+mobiliario+escolar+mesabancos+pupitre+escuelas+escolar+software+educativo+tecnologia+educativa+proyectores+pizarrones+interactivos+inteligente+encivlomedia+timbre+escolar+programable+pizarrones+interactivos';
var metaContents  = 'ANTECEDENTES++++El+aula+inteligente%C2%AE+fue+creada+con+la+aportaci%C3%B3n+de+ideas+de+maestros%2C+alumnos%2C+directivos+de+universidades%2C+colegios+p%C3%BAblicos+y+privados%2C+expertos+en+pedagog%C3%ADa+y+de+tecnolog%C3%ADas+de+la+informaci%C3%B3n+y+comunicaci%C3%B3n.++++En+todo+el+mundo%2C+cada+vez+estamos+m%C3%A1s+concientes+de+tener+el+compromiso+de+lograr+una+educaci%C3%B3n+de+mejor+calidad.++++En+M%C3%A9xico%2C+el+Programa+Nacional+de+Educaci%C3%B3n+2001-2006+ya+anticipa+una+visi%C3%B3n+al+2025%2C+donde+comenta+lo+siguiente%3A+%E2%80%9CTodas+las+escuelas+e+instituciones+tendr%C3%A1n+las+instalaciones+e+infraestructura+suficientes+y+en+buen+estado+de+acuerdo+a+sus+caracter%C3%ADsticas%2C+tendr%C3%A1n+amplio+acceso+a+las+tecnolog%C3%ADas+de+la+informaci%C3%B3n+y+la+comunicaci%C3%B3n%2C+que+ser%C3%A1n+plenamente+aprovechadas+por+maestros+y+alumnos%E2%80%9D.++++Y+continua+diciendo%3A+%E2%80%9CLas+concepciones+pedag%C3%B3gicas+con+las+que+funcionar%C3%A1+el+Enfoque++Educativo+para+el+siglo+XXI+ser%C3%A1n%3A++++Efectivas%3A++%E2%80%A2+El+aprendizaje+de+los+estudiantes+ser%C3%A1+el+centro+de+atenci%C3%B3n++%E2%80%A2+Los+maestros+y+acad%C3%A9micos+ser%C3%A1n+facilitadores+y+tutores+del+aprendizaje++%E2%80%A2+Una+mejor+interacci%C3%B3n+maestro-alumno++Innovadoras%3A++%E2%80%A2+Integrando+tecnolog%C3%ADas+de+la+informaci%C3%B3n+y+comunicaci%C3%B3n+con+enfoque+pedag%C3%B3gico++%E2%80%A2+Educadores+actualiz%C3%A1ndose+permanentemente++%E2%80%A2+Innovaci%C3%B3n+como+componente+natural+y+permanente+en+la+educaci%C3%B3n++%E2%80%A2+Las+aulas+se+enlazar%C3%A1n+con+redes+de+comunicaci%C3%B3n+multimedia++Realizadoras%3A++%E2%80%A2+Promotoras+de+valores%2C+de+convivencia+y+respeto+a+la+diversidad+cultural%E2%80%9D++++Hoy+a+trav%C3%A9s+del+aula+inteligente%C2%AE%2C+se+ofrece+educaci%C3%B3n+de+clase+mundial+en+el+2004%2C+anticip%C3%A1ndonos+al+2025.++CARACTERISTICAS+DE+LAS+ESCUELAS+ANTE+EL+CAMBIO+EDUCATIVO.++Considerando+los+cambios+en+la+ense%C3%B1anza+y+aprendizaje%2C+y+lo+que+est%C3%A1n+haciendo+las+instituciones+educativas+l%C3%ADderes+a+nivel+mundial%2C+las+aulas+deben+contar+con%3A++Plug-n-Play++Conectividad+de+Internet+%2F+Intranet+y+equipos+port%C3%A1tiles+de+electricidad+y+datos%2C+con+o+sin+cableado.++++++Fold-n-go++Facilidad+para+mover+y+guardar+el+mobiliario+y+reconfigurar+espacios+r%C3%A1pidamente.++++++Say-n-see++Presentaciones+formales%2C+grabadas+en+video%2C+PowerPoint%2C+Intranet+e+Internet.++++++Relate-n-reflect++Realizar+simult%C3%A1neamente%2C+colaboraci%C3%B3n%2C+reflexi%C3%B3n+y+aprendizaje+por+los+alumnos.++++++Inspire-the-intellect++Motivar+y+complacer+a+los+alumnos%2C+haci%C3%A9ndoles+vivir+una+experiencia+amena+e+inolvidable.++++++El+aula+inteligente%C2%AE+posee+todas+estas+caracter%C3%ADsticas+y+se+conceptualiza+como+una+soluci%C3%B3n+m%C3%BAltiple%3A+es+una+aula+colaborativa+para+analizar+y+resolver+problemas+en+equipo%3B+un+aula+de+equipos+y+proyectos+para+que+los+estudiantes+tengan+donde+explayarse+para+hacer+sus+trabajos+y+un+aula+multiusos+muy+vers%C3%A1til+que+puede+reconfigurarse+con+rapidez+de+un+profesor+a+otro%2C+seg%C3%BAn+las+necesidades+de+alumnos+y+profesores+por+igual.++COMPONENTES+Y+BENEFICIOS+DEL+AULA+INTELIGENTE++El+aula+inteligente%C2%AE+se+integra+por+los+siguientes+componentes%3A++Arquitectura+Interior++%E2%80%A2+Control+de+iluminaci%C3%B3n++%E2%80%A2+Color+del+aula+que+ofrece+serenidad+visual++%E2%80%A2+Tres+paredes+de+escritura+en+pizarr%C3%B3n+acr%C3%ADlico++Conectividad++%E2%80%A2+Audio++%E2%80%A2+Datos++%E2%80%A2+Video++%E2%80%A2+Internet++Tecnolog%C3%ADa++%E2%80%A2+Computadora++%E2%80%A2+Pizarr%C3%B3n+interactivo+o+tableta+digital++%E2%80%A2+C%C3%A1mara+de+documentos++%E2%80%A2+Videoproyector++Mobiliario++%E2%80%A2+Mesas+individuales+y+binarias+especial+para+la+reconfiguraci%C3%B3n+de+espacios++%E2%80%A2+Sillas+especiales+apilables++Modelo+Educativo+y+Did%C3%A1ctico++%E2%80%A2+Gu%C3%ADa+de+uso%2C+objetivos+y+aplicaciones+para+el+maestro++%E2%80%A2+25+ejemplos+metodol%C3%B3gicos+que+cubren+todas+las+asignaturas++Soporte+Integral++%E2%80%A2+Entrega+inmediata+en+todo+el+pa%C3%ADs++%E2%80%A2+Capacitaci%C3%B3n+a+maestros++%E2%80%A2+Soporte+t%C3%A9cnico++%E2%80%A2+Garant%C3%ADa+de+3+a%C3%B1os++%E2%80%A2+Centro+de+atenci%C3%B3n+a+clientes+01-800-00+RIZZO+y+chat++Podemos+mencionar+grandes+beneficios+del+aula+inteligente%C2%AE+para+maestros+y+alumnos%3A++Para+el+maestro+++El+uso+y+comprensi%C3%B3n+de+la+tecnolog%C3%ADa+le+permite+programar+y+dar+seguimiento+a+todos+sus+contenidos%2C+resaltar+avances+individuales+y+de+grupo%2C+le+da+la+oportunidad+de+experimentar+y+programar+m%C3%A1s+actividades+vivenciales.++Para+el+alumno+++Vivir%C3%A1+intensamente+el+aprendizaje+en+todas+sus+formas%2C+visual%2C+oral%2C+escrita+y+auditiva%2C+desarrollar%C3%A1+su+creatividad%2C+estimular%C3%A1+su+potencial+innovador%2C+fortalecer%C3%A1+su+aprendizaje+aut%C3%B3nomo+y+despertar%C3%A1+su+inter%C3%A9s+por+la+ciencia+y+la+tecnolog%C3%ADa.';
theSitetree.getById = function(id, ar) {
	if (typeof(ar) == 'undefined'){
		ar = this;
	}
	for (var i=0; i < ar.length; i++) {
		if (ar[i][POS_ID] == id){
			return ar[i];
		}
		if (ar[i][POS_CHILDS].length > 0) {
			var result=this.getById(id, ar[i][POS_CHILDS]);
			if (result != null){
				return result;
			}
		}
	}
	return null;
};

theSitetree.getParentById = function(id, ar) {
	if (typeof(ar) == 'undefined'){
		ar = this;
	}
	for (var i=0; i < ar.length; i++) {
		for (var j = 0; j < ar[i][POS_CHILDS].length; j++) {
			if (ar[i][POS_CHILDS][j][POS_ID] == id) {
				// child found
				return ar[i];
			}
			var result=this.getParentById(id, ar[i][POS_CHILDS]);
			if (result != null){
				return result;
			}
		}
	}
	return null;
};

theSitetree.getName = function(id) {
	var elem = this.getById(id);
	if (elem != null){
		return elem[POS_NAME];
	}
	return null;
};

theSitetree.getNavigationText = function(id) {
	var elem = this.getById(id);
	if (elem != null){
		return elem[POS_NAVIGATIONTEXT];
	}
	return null;
};

theSitetree.getHREF = function(id) {
	var elem = this.getById(id);
	if (elem != null){
		return elem[POS_HREF];
	}
	return null;
};

theSitetree.getIsNavigation = function(id) {
	var elem = this.getById(id);
	if (elem != null){
		return elem[POS_ISNAVIGATION];
	}
	return null;
};

theSitetree.getTemplateName = function(id, lastTemplateName, ar) {
	if (typeof(lastTemplateName) == 'undefined'){
		lastTemplateName = this.topTemplateName;
	}
	if (typeof(ar) == 'undefined'){
		ar = this;
	}
	for (var i=0; i < ar.length; i++) {
		var actTemplateName = ar[i][POS_TEMPLATENAME];
		if (actTemplateName == ''){
			actTemplateName = lastTemplateName;
		}
		if (ar[i][POS_ID] == id) {
			return actTemplateName;
		}
		if (ar[i][POS_CHILDS].length > 0) {
			var result=this.getTemplateName(id, actTemplateName, ar[i][POS_CHILDS]);
			if (result != null){
				return result;
			}
		}
	}
	return null;
};

theSitetree.getByXx = function(lookup, xx, ar) {
    if (typeof(ar) == 'undefined'){
    	ar = this;
    }
    for (var i=0; i < ar.length; i++) {
        if (ar[i][xx] == lookup){
        	return ar[i];
        }
        if (ar[i][POS_CHILDS].length > 0) {
        	var result=this.getByXx(lookup, xx, ar[i][POS_CHILDS]);
            if (result != null){
                return result;
               }
        }
    }
    return null;
};

function gotoPage(lookup) {
	if(__path_prefix__ == "/servlet/CMServeRES" && typeof (changePage) == 'function'){
		changePage(lookup);
		return;
	}
	var page = theSitetree.getHREF(lookup);
	if (!page) {
		var testFor = [ POS_NAME, POS_NAVIGATIONTEXT ];
		for (var i=0 ; i < testFor.length ; i++) {
			var p = theSitetree.getByXx(lookup, testFor[i]);
			if (p != null) {
				page = p[POS_HREF];
				break;
			}
		}
	}
	document.location.href = (new URL(__path_prefix__ + page, true, true)).toString();
};
