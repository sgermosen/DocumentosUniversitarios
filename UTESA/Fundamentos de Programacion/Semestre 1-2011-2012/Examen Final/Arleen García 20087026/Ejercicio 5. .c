int potencia (int base, int exponente);
int potencia (int base, int exponente){
    int resultado = 1, i = 1; 
    for (i;i<= exponente; i++){
        resultado = resultado * base;
        }
        return resultado;
        }
int main () {
    int num1, num2;
    printf ("Introducir la base: ") ;
    scanf ("%d", &num1 );
    printf ("Introducir el exponente: ") ;
    scanf ("%d", &num2 );
    printf ("La potencia es igual a %d\n:", potencia (num1,num2)) ;
   printf ("Introducir la base: ") ;
    scanf ("%d", &num1 ); 
    printf ("Introducir el exponente: ") ;
    scanf ("%d", &num2 );
     printf ("La potencia es igual a %d\n:", potencia (num1,num2)) ;
     system ("pause");
     }
