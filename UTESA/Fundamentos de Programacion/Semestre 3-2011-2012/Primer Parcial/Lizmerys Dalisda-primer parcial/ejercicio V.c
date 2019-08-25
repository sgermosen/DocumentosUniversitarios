int main () {

 int numero;

printf ("Introduzca el numero de cual desea obtener el factorial:");
scanf ("%d", &numero);


while ( numero !=0) {
     int resultado =1;
     for ( numero; numero >=1; numero-- )

     {
         resultado *= numero;
     }
     return resultado;
 }
}


