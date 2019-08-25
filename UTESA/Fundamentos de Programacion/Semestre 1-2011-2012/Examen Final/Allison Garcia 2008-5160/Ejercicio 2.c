int main(){
    int num1, num2, num3;
    printf("Introducir un valor: ");
    scanf("%d", &num1);
    printf("Introducir un valor: ");
    scanf("%d", &num2);
    printf("Introducir un valor: ");
    scanf("%d", &num3);
    int resultado1 = num1 + num2 + num3;
    printf("Resultado = %d\n", resultado1);
    int resultado2 = num1 - num2 - num3;
    printf("Resultado = %d\n", resultado2);
    int resultado3 = num1 * num2 * num3;
    printf("Resultado = %d\n", resultado3);
    int resultado4 = num1 / num2 / num3;
    printf("Resultado = %d\n", resultado4);
    system("pause");
}
