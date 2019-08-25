int main(){
    int numero;
    do{
        printf("Introduzca un numero del 1 al 12: ");
        scanf("%d", &numero);

        switch(numero){

        case 1:
             printf("Enero, tiene 31 dias.\n");
             break;
        case 2:
              printf("Febrero, tiene 28 dias.\n");
              break;
        case 3:
             printf("Marzo, tiene 31 dias.\n");
             break;
        case 4:
              printf("Abril, tiene 30 dias.\n");
              break;
        case 5:
             printf("Mayo, tiene 31 dias.\n");
             break;
        case 6:
              printf("Junio, tiene 30 dias.\n");
              break;
        case 7:
             printf("Julio, tiene 31 dias.\n");
             break;
        case 8:
              printf("Agosto, tiene 31 dias.\n");
              break;
        case 9:
             printf("Septiembre, tiene 30 dias.\n");
             break;
        case 10:
              printf("Octubre, tiene 31 dias.\n");
              break;
        case 11:
             printf("Noviembre, tiene 30 dias.\n");
             break;
        case 12:
              printf("Diciembre, tiene 31 dias.\n");
              break;
              }
        }
        while (numero <= 12 && numero >= 1);
                     printf("La operacion no es valida.\n");

                     }



