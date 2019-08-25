int main(){
    int numero;
    do{
        printf("Ponga una calificacion:");
        scanf("%d", &numero);
        if(numero > 100){
    printf("Calificacion Invalida\n");
    } else if (numero >= 90){
        printf("A\n");

    } else if (numero >= 80){
        printf("B\n");

    } else if (numero >= 70){
        printf("C\n");

    } else if (numero >= 60){
        printf("D\n");

    } else {
        printf("F\n");

    }
    }while(numero > 37 );
    printf("FIN del programa\n");
    printf("Total A = \n");
    printf("Total B = \n");
    printf("Total C = \n");
    printf("Total D = \n");
    printf("Total F = \n");
}
