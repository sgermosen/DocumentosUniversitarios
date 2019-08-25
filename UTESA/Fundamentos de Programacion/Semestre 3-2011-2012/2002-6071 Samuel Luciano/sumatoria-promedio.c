int main(){
    int numero, sumatoria = 0, cantidad = 0;
    do{
        printf("Introduzca un n%cmero: ", 163);
        scanf("%d", &numero);
        sumatoria = sumatoria + numero;
        cantidad++;
    }while(numero != 0);
    printf("Sumatoria = %d\n", sumatoria);
    printf("Promedio = %.2f\n", (float)sumatoria/cantidad);
}
