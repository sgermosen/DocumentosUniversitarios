/*Este programa fue creado por Alvin Adrian Del Rosario Brito(2009-5076).
 Creado el 7-Junio-2012
 El programa consiste en redondear un numero de 4 cifras a la centena mas proxima.
 PUCMM SD -ISC206 -T -003  SAMUEL A. LUCIANO L.*/
int main(){
    int A, B, C, D, num;
    printf("Introduzca primer valor(luego presione enter): ");
    scanf("%d", &A);
    printf("Introduzca segundo valor(luego presione enter): ");
    scanf("%d", &B);
    printf("Introduzca tercer valor(luego presione enter): ");
    scanf("%d", &C);
    printf("Introduzca cuarto valor(luego presione enter): ");
    scanf("%d", &D);
    printf("\nEl numero que se introdujo es: %d%d%d%d\n\n ", A, B, C, D);
      if(C >= 5){
         printf("El numero redondiado a la centena mas proxima es: %d%d%d%d\n\n ", A, B +1, C = 0, D = 0);  
      } else if (C < 5){
         printf("El numero redondiado a la centena mas proxima es: %d%d%d%d\n\n ", A, B, C = 0, D = 0);    
      }
system("pause");    
}
