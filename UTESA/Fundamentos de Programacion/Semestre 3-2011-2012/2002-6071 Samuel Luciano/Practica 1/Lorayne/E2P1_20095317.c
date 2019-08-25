int main () {
    printf("Opradores aritmeticos\n\n");
 int numero1;
      printf("Introducir primer valor:");
      scanf("%d", &numero1);
 int numero2;
      printf("Introducir segundo valor:");
      scanf("%d", &numero2);
 int numero3;
      printf("Introducir tercer valor:");
      scanf("%d", &numero3);
printf("%d + %d + %d = %d\n", numero1, numero2, numero3, numero1 + numero2 + numero3);
printf("%d - %d - %d = %d\n", numero1, numero2, numero3, numero1 - numero2 - numero3);
printf("%d * %d * %d = %d\n", numero1, numero2, numero3, numero1 * numero2 * numero3);

printf("%d / %d = %d\n", numero1, numero2,  numero1 / numero2 );
printf("%d / %d = %d\n", numero1, numero3,  numero1 / numero3 );
printf("%d / %d = %d\n", numero2, numero3,  numero2 / numero3 );

printf("El residuo de la division es: %d\n", numero1&numero2 );


system("pause");
}
