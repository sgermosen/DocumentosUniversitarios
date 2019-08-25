int main(){
    float valor1, valor2;
    char operador;
    printf("Introduzca un valor: ");
    scanf("%d", &valor1);
    printf("Introduzca un valor: ");
    scanf("%d", &valor2);
    printf("Introduzca el operador: ");
    scanf(" %c", &operador);
    switch(operador){
        case '+':
            printf("Suma = %.2f\n", valor1 + valor2);
            break;
        case '-':
            printf("Resta = %.2f\n", valor1 - valor2);
            break;
        case '*':
            printf("Multiplicacion = %.2f\n", valor1 * valor2);
            break;
        case '/':
            if(valor2 == 0){
                printf("Division por 0 indeterminada.");
                break;
            }
            printf("Division = %.2f\n", valor1 / valor2);
            break;
        default:
            printf("Operacion indeterminada.");
    }
}
