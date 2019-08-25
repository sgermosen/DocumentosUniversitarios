int main(){
    int meses;
    printf("Introduzca un mes del 1 al 12: ");
    scanf("%d", &meses);
    switch(meses){
         case 1:
             printf("\nEl mes es: ENERO, que tiene 31 dias \n\n");
             break;
         case 2:
             printf("\nEl mes es: FEBRERO, que tiene 28 dias \n\n");
             break;
         case 3:
             printf("\nEl mes es: MARZO, que tiene 31 dias \n\n");
             break;
         case 4:
             printf("\nEl mes es: ABRIL, que tiene 30 dias \n\n");
             break;
         case 5:
             printf("\nEl mes es: MAYO, que tiene 31 dias \n\n");
             break;
         case 6:
             printf("\nEl mes es: JUNIO, que tiene 30 dias \n\n");
             break;
         case 7:
             printf("\nEl mes es: JULIO, que tiene 31 dias \n\n");
             break;
         case 8:
             printf("\nEl mes es: AGOSTO, que tiene 31 dias \n\n");
             break;
         case 9:
             printf("\nEl mes es: SEPTIEMBRE, que tiene 30 dias \n\n");
             break;
         case 10:
             printf("\nEl mes es: OCTUBRE, que tiene 31 dias \n\n");
             break;
         case 11:
             printf("\nEl mes es: NOVIEMBRE, que tiene 30 dias \n\n");
             break;
         case 12:
             printf("\nEl mes es: DICIEMBRE, que tiene 31 dias \n\n");
             break;
         default:
                  printf("\nNumero Incorrecto \n\n");
         }
    system("pause");
}
