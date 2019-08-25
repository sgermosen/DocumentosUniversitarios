int main(){
    int mes;
    printf(" Introduzca el numero del Mes: ");
    scanf("%d", & mes);
    if( mes <= 1 ){
        printf("Enero: 31 dias\n");
    } else if ( mes <=2 ){
        printf("Febrero: 28 dias y 29 si bisiesto\n");
    } else if ( mes <=3){
        printf("Marzo: 31 dias\n");
    } else if ( mes <= 4){
        printf("Abril: 30 dias\n");
    } else if ( mes <= 5){
        printf("Mayo: 31 dias\n");
    }else if ( mes <= 6){
        printf("Junio: 30 dias\n");
    }else if ( mes <= 7){
        printf("Julio: 31 dias\n");
    }else if ( mes <= 8){
        printf("Agosto: 31 dias\n");
    }else if ( mes <= 9){
        printf("Septiembre: 30 dias\n");
    }else if ( mes <= 10){
        printf("Octubre: 31 dias\n");
    }else if ( mes <= 11){
        printf("Noviembre: 30 dias\n");
    }else if ( mes <= 12){
        printf("Diciembre: 31 dias\n");
    }else if ( mes >12){
        printf("Numero de mes Invalido\n");}

}
