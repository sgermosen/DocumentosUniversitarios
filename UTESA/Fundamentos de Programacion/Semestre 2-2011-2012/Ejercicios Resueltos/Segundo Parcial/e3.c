int potencia(int base, int exp);
int potencia(int base, int exp){
    int aux = 1;
    for(exp;exp >= 1;exp--){
                aux *= base;             
    }
    return aux;
}
int main(){
    int base, exp;
    printf("Introduzca un numero: ");
    scanf("%d", &base);
    printf("Introduzca el exponente: ");
    scanf("%d", &exp);
    printf("Resultado del calculo de la potencia: %d\n\n", potencia(base, exp));
    printf("Introduzca un numero: ");
    scanf("%d", &base);
    printf("Introduzca el exponente: ");
    scanf("%d", &exp);
    printf("Resultado del calculo de la potencia: %d\n\n", potencia(base, exp));
    printf("Introduzca un numero: ");
    scanf("%d", &base);
    printf("Introduzca el exponente: ");
    scanf("%d", &exp);
    printf("Resultado del calculo de la potencia: %d\n\n", potencia(base, exp));
    system("pause");    
}
