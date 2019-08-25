/*Este programa fue creado por Alvin Adrian Del Rosario Brito(2009-5076).
 Creado el 7-Junio-2012
 El programa consiste en invertir un numero de 4 cifras.
 PUCMM SD -ISC206 -T -003  SAMUEL A. LUCIANO L.*/
int main(){
    int A, B, C, D;
    printf("Introduzca primer valor(luego presione enter): ");
    scanf("%d", &A);
    printf("Introduzca segundo valor(luego presione enter): ");
    scanf("%d", &B);
    printf("Introduzca tercer valor(luego presione enter): ");
    scanf("%d", &C);
    printf("Introduzca cuarto valor(luego presione enter): ");
    scanf("%d", &D);
    printf("\nEl numero que se introdujo es: %d%d%d%d\n\n ", A, B, C, D);
    printf("\nEl numero invertido es: %d%d%d%d\n\n ", D, C, B, A);
      
system("pause");    
}
