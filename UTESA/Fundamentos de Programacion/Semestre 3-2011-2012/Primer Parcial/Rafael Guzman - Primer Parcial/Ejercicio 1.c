int main(){ //¿Cuándo acaba el programa?
    int numero;
    do{
        printf("Introduzca un numero del 1 al 12: ");
        scanf("%d", &numero);
        switch(numero){
        case 1:
             printf("Este corresponde al mes de Enero, tiene 31 dias.\n");
             break;
        case 2:
              printf("Este corresponde al mes de Febrero, tiene 28 dias.\n");
              break;
        case 3:
             printf("Este corresponde al mes de Marzo, tiene 31 dias.\n");
             break;
        case 4:
              printf("Este corresponde al mes de Abril, tiene 30 dias.\n");
              break;
        case 5:
             printf("Este corresponde al mes de Mayo, tiene 31 dias.\n");
             break;
        case 6:
              printf("Este corresponde al mes de Junio, tiene 30 dias.\n");
              break;
        case 7:
             printf("Este corresponde al mes de Julio, tiene 31 dias.\n");
             break;
        case 8:
              printf("Este corresponde al mes de Agosto, tiene 31 dias.\n");
              break;
        case 9:
             printf("Este corresponde al mes de Septiembre, tiene 30 dias.\n");
             break;
        case 10:
              printf("Este corresponde al mes de Octubre, tiene 31 dias.\n");
              break;
        case 11:
             printf("Este corresponde al mes de Noviembre, tiene 30 dias.\n");
             break;
        case 12:
              printf("Este corresponde al mes de Diciembre, tiene 31 dias.\n");
              break;
              }
        }while (numero <= 12 && numero >= 1);
                     printf("La operacion no es valida.\n");
}
