int main(){
    int calif, suma = 0, i = 1;
    do{
        printf("Introduzca una calificación entre 0 y 100:");
        scanf("%d", &calif);
        if(calif >= 0 && calif <= 100){
                 suma += calif;
                 i++;
        } else {
               printf("Calificacion invalida. Introduzca otra.\n\n");       
        }
    }while(i <= 10);
    printf("\n\nEl promedio es igual a: %.2f\n", (float)suma/i);
    system("pause");    
}
