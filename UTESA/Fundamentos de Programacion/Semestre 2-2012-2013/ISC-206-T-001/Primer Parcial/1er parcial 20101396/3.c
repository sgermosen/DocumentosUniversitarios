int main(){

 int numero;
 int i;

do {
 printf("pon un numero (del 1 al 100): ");
    scanf("%d", &numero);

    if (numero > 100 || numero < 1)
        printf("Numero invalido, tiene q ser del 1-100");

        printf("\n");

}while(numero < 1 || numero>100);


    for (i = 2; i < numero; i++)
        if (numero % i == 0)
        {
        printf("no es primo");
        return;
    }

    printf("es primo");


}
