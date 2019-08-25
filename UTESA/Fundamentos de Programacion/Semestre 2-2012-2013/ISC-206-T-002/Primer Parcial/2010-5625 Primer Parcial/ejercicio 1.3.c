int main(){
   int a, numero;
   printf ("ingrese un limite:");
   scanf ("%d",& numero);
   for (a=1; a < numero && numero %a !=0; a ++);
   if (a ==numero)
     printf ("\nE1 n\2numero %d s\241 es primo. \n\n", numero);
     else
     printf ("\nE1 n\2numero %d no es primo. \n\n", numero);



     system ("pause");



}
