/*Este programa fue creado por Alvin Adrian Del Rosario Brito(2009-5076).
 Creado el 7-Junio-2012. Ultima modificacion 8-Junio-2012.
 El programa consiste en introducir un numero(1-12) y este imprime en pantalla el mes.
 PUCMM SD -ISC206 -T -003  SAMUEL A. LUCIANO L.*/
int main(){
    int meses;
    printf("Introduzca el numero del mes del 1 al 12(luego presione enter): ");
    scanf("%d", &meses);
    if(meses == 1){
             printf("\nEl mes es: ENERO (31 dias)\n\n");
    } else if(meses == 2){
             printf("\nEl mes es: FEBRERO (28 dias) o (29 dias en anos bisiestos)\n\n");
    } else if(meses == 3){
              printf("\nEl mes es: MARZO (31 dias)\n\n");
    } else if(meses == 4){
              printf("\nEl mes es: ABRIL (30 dias)\n\n");
    } else if(meses == 5){
              printf("\nEl mes es: MAYO (31 dias)\n\n");
    } else if(meses == 6){
              printf("\nEl mes es: JUNIO (30 dias)\n\n");
    } else if(meses == 7){
              printf("\nEl mes es: JULIO (31 dias)\n\n");
    } else if(meses == 8){
               printf("\nEl mes es: AGOSTO (31 dias)\n\n");
    } else if(meses == 9){
               printf("\nEl mes es: SEPTIEMBRE (30 dias)\n\n");
    } else if(meses == 10){
               printf("\nEl mes es: OCTUBRE (31 dias)\n\n");
    } else if(meses == 11){
               printf("\nEl mes es: NOVIEMBRE (30 dias)\n\n");
    } else if(meses == 12){
               printf("\nEl mes es: DICIEMBRE (31 dias)\n\n");
    } else {
               printf("\nEL NUMERO ES INVALIDO,vuelva a intenteralo! \n\n");
    }
    system("pause");
}
