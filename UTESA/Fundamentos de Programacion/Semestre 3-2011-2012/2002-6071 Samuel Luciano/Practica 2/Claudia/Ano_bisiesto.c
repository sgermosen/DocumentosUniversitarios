/* Año bisiesto
Claudia Rodriguez Roque
2008-5605 */ 

int main(){
    
    int numero;
    int resto4, resto100, resto400;
    char caracter= 'N';
    
    printf("Capturar un año: "); 
    scanf("%d", &numero);
    resto4 = numero % 4;
    resto100 = numero % 100;
    resto400 = numero % 400;
    
    if((resto4 == 0) && (resto100 != 0)) {
             caracter = 'S';
              }
    if((resto4 == 0) && (resto100 == 0) && (resto400 == 0)) {
             caracter = 'S';
              }
    printf("%c\n", caracter);
    
    system("pause");
}
