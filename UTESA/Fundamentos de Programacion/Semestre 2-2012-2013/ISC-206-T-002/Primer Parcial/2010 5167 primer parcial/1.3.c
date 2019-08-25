int main(){

   int numero, divisor;
   printf("Cual numero quieres conocer si es primo?\n");
   scanf("%d", &numero);

   while(numero<2 ){
       printf("Excusa, no acepto numeros menores que 2.\n");
       printf("Reintente\n");
       scanf("%d", &numero);

   }
   for (divisor = 2; divisor <= sqrt(numero); divisor++) {
       if (numero%divisor==0){
          printf("%d no es primo.\n", numero);
          return;

       }
   }
 printf ("%d es primo.\n", numero);
}
