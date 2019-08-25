int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int potencia = 1, i = 1;
    for(i;i <= exponente;i++){
            potencia = potencia * base;
}
    return potencia;
}
int main(){
    int valor1, valor2;
    printf("Introdusca la base: ");
    scanf("%d", &valor1);
    printf("Introdusca el exponente: ");
    scanf("%d", &valor2);
    printf("La potencia es igual a %d\n.", potencia(valor1,valor2));
    system("pause");
}
