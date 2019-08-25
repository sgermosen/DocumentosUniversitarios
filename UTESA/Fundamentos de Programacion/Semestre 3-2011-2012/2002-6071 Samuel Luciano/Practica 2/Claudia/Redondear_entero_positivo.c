/* Redondear entero positivo
Claudia Rodriguez 
2008-5605*/

int main(){
    
    int A, B, C, D;
    int num01, num02;
       printf("Introducir un numero: "); 
    scanf("%d", &A);
       printf("Introducir un numero: "); 
    scanf("%d", &B);
       printf("Introducir un numero: "); 
    scanf("%d", &C);
       printf("Introducir un numero: "); 
    scanf("%d", &D);
    
    num01 = (A * 1000) + (B * 100) + (C * 10) + D;
    printf("El numero capturado es: %d\n", num01); 
    
    if(C >= 5){
         B = B + 1;
         }
    if(B > 9){
         B = 0;
         A = A + 1;
         }    
    C = 0;
    D = 0; 
    
    num02 = (A * 1000) + (B * 100) + (C * 10) + D;
    printf("El numero capturado es: %d\n", num02); 
           
    system("pause");
}
