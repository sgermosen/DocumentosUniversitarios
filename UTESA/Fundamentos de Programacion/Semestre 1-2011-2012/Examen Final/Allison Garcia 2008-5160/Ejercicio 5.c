int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int resultado = 1, i = 1;
    for(i;i <= exponente;i++){
            resultado = resultado * base;
    }
    return resultado;
}

int main(){
    int num1, num2;
    printf("Introducir la base: \n");
    scanf("%d", &num1);
    printf("Introducir el exponente: \n");
    scanf("%d", &num2);
    printf("La potencia es %d\n", potencia(num1,num2));
    system("pause");
}
