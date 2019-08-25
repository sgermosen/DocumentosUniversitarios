int main(){
    int A, B, C, D, num;
    printf("Introduzca el primer valor: ");
    scanf("%d", &A);
    printf("Introduzca el segundo valor: ");
    scanf("%d", &B);
    printf("Introduzca el tercer valor: ");
    scanf("%d", &C);
    printf("Introduzca el cuarto valor: ");
    scanf("%d", &D);
    printf("\nEl numero que introdujo es: %d%d%d%d\n\n ", A, B, C, D);
      if(C >= 5){
         printf("El numero redondeado a la centena mas proxima es: %d%d%d%d\n\n ", A, B +1, C = 0, D = 0);  
      } else if (C < 5){
         printf("El numero redondeado a la centena mas proxima es: %d%d%d%d\n\n ", A, B, C = 0, D = 0);    
      }
system("pause");    
}
