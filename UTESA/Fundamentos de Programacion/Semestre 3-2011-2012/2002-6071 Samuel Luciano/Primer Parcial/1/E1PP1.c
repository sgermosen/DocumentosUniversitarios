int main(){
    int mes;
    printf("Introduzca un numero de mes: ");
    scanf("%d", &mes);
    switch(mes){
        case 1:
            printf("Enero - 31 dias");
            break;
        case 2:
            printf("Febrero - 28 dias");
            break;
        case 3:
            printf("Marzo - 31 dias");
            break;
        case 4:
            printf("Abril - 30 dias");
            break;
        case 5:
            printf("Mayo - 31 dias");
            break;
        case 6:
            printf("Junio - 30 dias");
            break;
        case 7:
            printf("Julio - 31 dias");
            break;
        case 8:
            printf("Agosto - 31 dias");
            break;
        case 9:
            printf("Septiembre - 30 dias");
            break;
        case 10:
            printf("Octubre - 31 dias");
            break;
        case 11:
            printf("Noviembre - 30 dias");
            break;
        case 12:
            printf("Diciembre - 31 dias");
            break;
        default:
            printf("El numero %d no es un mes del calendario.", mes);
    }
}
