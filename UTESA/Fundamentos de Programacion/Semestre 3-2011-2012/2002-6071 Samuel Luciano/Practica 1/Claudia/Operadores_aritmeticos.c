/* Operadores aritmeticos
Claudia Rodriguez Roque
2008-5605 */ 

int main (){
    int numero1, numero2, numero3;
    printf("Introducir un valor: ");
    scanf("%d", &numero1);
    printf("Introducir un valor: ");
    scanf("%d", &numero2);
    printf("Introducir un valor: ");
    scanf("%d", &numero3);
  
   
   int resultado = numero1 + numero2 + numero3; 
   printf("Resultado %d\n", resultado);
   int resultado01 = numero1 - numero2 - numero3; 
   printf("Resultado %d\n", resultado01);
   int resultado02 = numero1 * numero2 * numero3; 
   printf("Resultado %d\n", resultado02);
   int resultado03 = numero1 / numero2 / numero3; 
   printf("Resultado %d\n", resultado03);
   
   int resultado04 = numero1 / numero2; 
   printf("Resultado %d\n", resultado04);
    system("pause");
}
