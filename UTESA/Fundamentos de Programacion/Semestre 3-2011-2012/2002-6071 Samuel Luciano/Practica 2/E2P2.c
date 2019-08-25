int main(){
    int num1, num2;
    char op;
    printf("Introduzca el primer operando: ");
    scanf("%d", &num1);
    printf("Introduzca el segundo operando: ");
    scanf("%d", &num2);
    printf("Introduzca el operador: ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            printf("Suma: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resta: %d\n", num1 - num2);
            break;
        case '*':
            printf("Multiplicacion: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 == 0){
                printf("La division por 0 es invalida.\n");
                break;
            }
            printf("Division: %d\n", num1 / num2);
            break;
    }
}
