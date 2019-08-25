//Calculo de media

int main (){ // Este ejercicio carece de lógica para el cálculo de la sumatoria y promedio.


    int i, numero, sumatoria = 0, cantidad, valor;

    printf("Introducir cantidad de notas: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
    printf("Numero %d\n", i);

    do{
printf("Introducir un valor: ");
scanf("%d", &valor);
} while(valor == " ");


    }

    printf("Sumatoria = %.0f\n", sumatoria);
     sumatoria = sumatoria / numero;
      printf("Promedio = %.2f\n", (float)sumatoria/numero);

    sumatoria = sumatoria + numero;
    cantidad++;
while(numero != 0); // Este while hace que el programa se vuelva infito.
    printf("Sumatoria = %d\n", sumatoria);
printf("Promedio = %.2f\n", (float)sumatoria/cantidad);
}








