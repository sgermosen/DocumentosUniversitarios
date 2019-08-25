int main(){
    int numero, sumatoria = 0, i = 1;
    do{
        printf("Introduzca un numero %d: ", i);
        scanf("%d", &numero);
        if(numero >= 0 && numero <= 100){
            sumatoria = sumatoria + numero;
            i++;
        } else {
            printf("Numero invalido!\n");
        }
    }while(i <= 10);
    printf("Promedio = %.2f\n", (float)sumatoria/i);
}
