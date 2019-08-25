int main(){
    int operador1, operador2;
    printf("introdusca un valor: ");
    scanf("%d", &operador1);
    printf("introdusca un valor: ");
    scanf("%d", &operador2);
    printf("resultado = %d\n", operador1 > operador2);
    printf("resultado = %d\n", operador1 < operador2);
    printf("resultado = %d\n", operador1 >= operador2);
    printf("resultado = %d\n", operador1 <= operador2);
    printf("resultado = %d\n", operador1 != operador2);
    printf("resultado = %d\n", operador1 == operador2);
    printf("resultado = %d\n", (operador1 > operador2) || (operador2 < operador1));
    system("pause");
}
