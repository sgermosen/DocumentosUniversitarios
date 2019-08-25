int main () {

 int numero1;
      printf("Introducir el primer numero:");
      scanf("%d", &numero1);
 int numero2;
      printf("Introducir el segundo numero:");
      scanf("%d", &numero2);
 int numero3;
      printf("Introducir el tercer numero:");
      scanf("%d", &numero3);
printf("%d + %d + %d = %d\n", numero1, numero2, numero3, numero1 + numero2 + numero3);
printf("%d - %d - %d = %d\n", numero1, numero2, numero3, numero1 - numero2 - numero3);
printf("%d * %d * %d = %d\n", numero1, numero2, numero3, numero1 * numero2 * numero3);

printf("%d / %d = %d\n", numero1, numero2,  numero1 / numero2 );

printf("El residuo de la division es: %d\n", numero3&numero1 );


system("pause");
}
