int main(){
    int meses;
    printf("Introduzca un mes del 1 al 12(luego presione enter): ");
    scanf("%d", &meses);
    switch(meses){
         case 1:
             printf("\nEl mes es: ENERO (31 dias)\n\n");
             break;
         case 2:
             printf("\nEl mes es: FEBRERO (28 dias) o (29 dias en anos bisiestos)\n\n");
             break;
         case 3:
             printf("\nEl mes es: MARZO (31 dias)\n\n");
             break;
         case 4:
             printf("\nEl mes es: ABRIL (30 dias)\n\n");
             break;
         case 5:
             printf("\nEl mes es: MAYO (31 dias)\n\n");
             break;
         case 6:
             printf("\nEl mes es: JUNIO (30 dias)\n\n");
             break;
         case 7:
             printf("\nEl mes es: JULIO (31 dias)\n\n");
             break;
         case 8:
             printf("\nEl mes es: AGOSTO (31 dias)\n\n");
             break;
         case 9:
             printf("\nEl mes es: SEPTIEMBRE (30 dias)\n\n");
             break;
         case 10:
             printf("\nEl mes es: OCTUBRE (31 dias)\n\n");
             break;
         case 11:
             printf("\nEl mes es: NOVIEMBRE (30 dias)\n\n");
             break;
         case 12:
             printf("\nEl mes es: DICIEMBRE (31 dias)\n\n");
             break;
         default:
                  printf("\nEL NUMERO ES INVALIDO,vuelva a intenteralo! \n\n");
         }

}
