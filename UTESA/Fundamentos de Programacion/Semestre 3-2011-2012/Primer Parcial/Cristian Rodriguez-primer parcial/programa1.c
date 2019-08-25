int main(){
    int numero;

    printf("ingrese un numero del mes:");
    scanf("%d",&numero);

    switch (numero){
        case 1:
            printf("enero,31 dias");
            break;
        case 2:
            printf("febrero,28 dias");
            break;
        case 3:
            printf("marzo,31 dias");
            break;
        case 4:
            printf("abril,31 dias");
            break;
        case 5:
            printf("mayo,31 dias");
            break;
        case 6:
            printf("junio,31dias");
            break;
        case 7:
            printf("julio,31 dias");
            break;
        case 8:
            printf("agosto,31 dias");
            break;
        case 9:
            printf("septiembre,28 dias");
            break;
        case 10:
            printf("octubre,31dias");
            break;
        case 11:
            printf("noviembre,31 dias");
            break;
        case 12:
            printf("diciembre,31dias");
            break;
        default:
            printf("\nmes no valido\n");

    }



}
