int main(){
    int num;
    printf("Introduzca el numero del mes:");
    scanf("%d", &num);
    if(num >= 1 && num <= 12) {
        if(num == 1){
            printf("Enero - 31 dias");
        }
        if(num == 2){
            printf("Febrero - 28 dias");
        }
        if(num == 3){
            printf("Marzo - 31 dias");
        }
        if(num == 4){
            printf("Abril - 30 dias");
        }
        if(num == 5){
            printf("Mayo - 31 dias");
        }
        if(num == 6){
            printf("Junio - 30 dias");
        }
        if(num == 7){
            printf("Julio - 31 dias");
        }
        if(num == 8){
            printf("Agosto - 31 dias");
        }
        if(num == 9){
            printf("Septiembre - 30 dias");
        }
        if(num == 10){
            printf("Octubre - 31 dias");
        }
        if(num == 11){
            printf("Noviembre - 30 dias");
        }
        if(num == 12){
            printf("Diciembre - 31 dias");
        }
    }else{
        printf("Opcion Invalida!");
    }
    return 0;
}
