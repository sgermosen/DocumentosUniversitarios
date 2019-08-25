function AgregarFavoritos(Titulo,URL) {

  if (navigator.appName=="Netscape") {
	window.sidebar.addPanel(Titulo,URL,""); 
  }

  if (navigator.appName=="Microsoft Internet Explorer"){
	window.external.AddFavorite(URL,Titulo);
  }

}

function fecha(){
// a continuacion creamos la fecha en la variable date
var date = new Date()
// Luego le sacamos los datos año, dia, mes 
// y numero de dia de la variable date
var ano = date.getYear();
if (ano < 2000) ano=ano+1900;
var dia = date.getDay();
var mes = date.getMonth();
var ndia = date.getDate();
//Como los dias de la semana vienen con numeros
//reemplazamos estos por el dia correspondiente
if (dia==0) {var dia="domingo"}
if (dia==1) {var dia="lunes"}
if (dia==2) {var dia="martes"}
if (dia==3) {var dia="miércoles"}
if (dia==4) {var dia="jueves"}
if (dia==5) {var dia="viernes"}
if (dia==6) {var dia="sábado"}
//Y hacemos lo mismo con los meses
if (mes==0) {var mes="Enero"}
if (mes==1) {var mes="Febrero"}
if (mes==2) {var mes="Marzo"}
if (mes==3) {var mes="Abril"}
if (mes==4) {var mes="Mayo"}
if (mes==5) {var mes="Junio"}
if (mes==6) {var mes="Julio"}
if (mes==7) {var mes="Agosto"}
if (mes==8) {var mes="Septiembre"}
if (mes==9) {var mes="Octubre"}
if (mes==10) {var mes="Noviembre"}
if (mes==11) {var mes="Diciembre"}
//juntamos todos los datos en una variable
fecha = dia + "," + " " + ndia + " de " + mes + " de " + ano
//y procedemos a escribir dicha fecha
document.write (fecha)
/* Objetivoweb.com - recursos para webmastes
http://www.objetovoweb.com/ */
}

function DropDownMenu(entered)
{
// ********************************* 
// DROP DOWN MENU (c) Henrik Petersen / NetKontoret 1998 - All rights reserved 
// Explained along with other useful scripts at: http://www.echoecho.com/javascript.htm
// You may freely use this script as long as you do not remove this line and the 2 lines above.
// ****************************************** 
with (entered)
{
// Store the selected option in a variable called ref
ref=options[selectedIndex].value; 
// Count the position of the optional &
splitcharacter=ref.lastIndexOf("&"); 

// The three lines below checks if a target goes along with the URL 
// That is: (if a "&" is in the option-value).
// If so, the URL is stored in a variable called loc and the target
// is stored in a variable called target.
// If not the URL is stored in a variable called loc and "_self" is
// stored in the variable called target.
if (splitcharacter!=-1) {loc=ref.substring(0,splitcharacter); target=ref.substring(splitcharacter+1,1000).toLowerCase();}
else {loc=ref; target="_self";};

// create a varible called lowloc to store loc in lowercase characters.
lowloc=loc.toLowerCase(); 

// Skip the rest of this function if the selected optionvalue is "false".
if (lowloc=="false") {return;} 

// Open link in current document
if (target=="_self") {document.location=loc;}

// Cancel eventual framesets and open link in current window
else {if (target=="_top") {top.location=loc;} 

// Open link in new window
else {if (target=="_blank") {window.open(loc);} 

// Open link in parent frame
else{if (target=="_parent") {parent.location=loc;} 

// Open link in the specified frame
else {parent.frames[target].location=loc;}; 
}}}}
}