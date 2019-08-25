/*Este programa fue creado por Alvin Adrian Del Rosario Brito(2009-5076).
 Creado el 7-Junio-2012
 El programa consiste en introducir un año y determinar si es o no bisiesto basandose en las siguientes reglas:
•Un año es bisiesto si éste es divisible por 4. 
•Salvo que ese año sea divisible por 100. 
•Pero si el año es divisible por 400, entonces si es bisiesto.

 PUCMM SD -ISC206 -T -003  SAMUEL A. LUCIANO L.*/
int main(){
    int year;
    printf("Introduce el a¤o: ");
    scanf("%d", &year); 
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
             printf("\nEl a¤o es bisiesto\n\n");
        }else{
              printf("\nEl a¤o NO es bisiesto\n\n");
        }
  system("pause");
}
