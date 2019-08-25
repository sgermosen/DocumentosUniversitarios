int main() {
    int mes;

    printf("\nIntroduzca un numero de mes:");
    scanf("%d", mes);

    if(mes >= 1 && mes <= 12) {
        if(mes = 1){
            printf("Este es Enero, y tiene 31 dias");
        }
        if(mes = 2) {
            printf("Este es Febrero, y suele tener 28 dias");
        }
        if(mes = 3){
            printf("Este es Marzo, y tiene 31 dias");
        }
        if(mes = 4){
            printf("Este es Abril, y tiene 30 dias");
        }
        if(mes = 5){
            printf("Este es Mayo, y tiene 31 dias");
        }
        if(mes = 6){
            printf("Este es Junio, y tiene 30 dias");
        }
        if(mes = 7){
            printf("Este es Julio, y tiene 31 dias");
        }
        if(mes = 8){
            printf("Este es Agosto, y tiene 31 dias");
        }
        if(mes = 9){
            printf("Este es Septiembre, y tiene 30 dias");
        }
        if(mes = 10){
            printf("Este es Octubre, y tiene 31 dias");
        }
        if(mes = 11){
            printf("Este es Noviembre, y tiene 30 dias");
        }
        if(mes = 12){
            printf("Este es Diciembre, y tiene 31 dias");
        }
    }
    else {
        printf("Solo son 12 meses!");
    }
}
