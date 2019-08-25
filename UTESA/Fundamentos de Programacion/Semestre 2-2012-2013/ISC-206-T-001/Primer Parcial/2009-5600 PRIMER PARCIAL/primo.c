int main(){

 int numero;
 int i;

do {
 printf("Escriba un numero (del 1 al 50): ");
    scanf("%d", &numero);

    if (numero > 50 || numero < 0)
        printf("Numero invalido, tiene q ser del 1-50");

        printf("\n");

}while(numero < 0 || numero>50);




    for (i = 2; i < numero; i++)
        if (numero % i == 0)
        {
        printf("no es primo");
        return;

    }


    printf("es primo");


}
