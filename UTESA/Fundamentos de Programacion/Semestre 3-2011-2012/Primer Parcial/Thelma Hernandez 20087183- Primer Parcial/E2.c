int main(){ // Este programa carece de lógica.
    int numero, sumatoria=0, i=1;
    do{
        printf("Cuantas Notas desea?",i ); // ¿Porqué imprime la variable i?
        scanf("%d", &numero); // El número de notas solo debe ser solicitado una vez, dentro del do, la solicitará cada vez que se ejecute el do.
        {
        if (numero>=i){ // Esta condición es innecesaria.
            printf(" Nota:");
            scanf("%d", &numero);
            }
        }break;
    while(i<=numero); // La variable i nunca se incrementa su valor.
    printf("Promedio = %.2f\n", (float)sumatoria/i);


}
}
