int main(){
    int nota, sumatoria = 0, i = 0, cantidad = 0;
    printf("¿Cu%cntas notas? ", 160);
    scanf("%d", &cantidad);
    do{
        printf("Nota %d: ", i);
        scanf("%d", &nota);
        sumatoria = sumatoria + nota;
        i++;
    }while(i <= cantidad);
    printf("Media: %.2f\n", (float)sumatoria/cantidad);
}
