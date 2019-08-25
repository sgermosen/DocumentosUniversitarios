int main () {

int x;
    printf("digite un mes del ano: ");
    scanf("%d",&x);

    switch(x) {
           case 1:
                printf("el mes es enero y tiene 31 dias");
                break;
           case 2:
                printf("el mes es febrero y tiene 28 dias");
                break;
           case 3:
                printf("el mes es marzo y tiene 30 dias");
                break;
           case 4:
                printf("el mes es abril y tiene 30 dias");
                break;
           case 5:
                printf("el mes es mayo y tiene 31 dias");
                break;
           case 6:
                printf("el mes es junio y tiene 30 dias");
                break;
           case 7:
                printf("el mes es julio y tiene 31 dias");
                break;
           case 8:
                printf("el mes es agosto y tiene 31 dias");
                break;
           case 9:
                printf("el mes es septiembre y tiene 30 dias");
                break;
           case 10:
                printf("el mes es octubre y tiene 31 dias");
                break;
           case 11:
                printf("el mes es noviembre y tiene 30 dias");
                break;
           case 12:
                printf("el mes es diciembre y tiene 31 dias");
                break;

                default:
                        printf("el caracter es invalido\n");
                        printf("solo se aceptan valores del 1-12\n");

                }
                  printf("\n\n");







}
