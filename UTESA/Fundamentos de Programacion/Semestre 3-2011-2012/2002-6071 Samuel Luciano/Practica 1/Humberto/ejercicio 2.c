int main () {

 int valor1;
      printf("Introducir precio:");
      scanf("%d", &valor1);
 int valor2;
      printf("Introducir otro precio:");
      scanf("%d", &valor2);
 int valor3;
      printf("Introducir otro precio:");
      scanf("%d", &valor3);
printf("%d + %d + %d = %d\n", valor1, valor2, valor3, valor1 + valor2 + valor3);
printf("%d - %d - %d = %d\n", valor1, valor2, valor3, valor1 - valor2 - valor3);
printf("%d * %d * %d = %d\n", valor1, valor2, valor3, valor1 * valor2 * valor3);

printf("%d / %d = %d\n", valor1, valor2,  valor1 / valor2 );

printf("El residuo de la division es: %d\n", valor3&valor1 );


system("pause");
}
