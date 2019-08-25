/*Rafael Guzman 2009-5956*/

int main () {
    int num1, num2;
    char signo;
        printf("Introduzca un numero: ");
        scanf("%d", &num1);
        printf("Introduzca otro numero: ");
        scanf("%d", &num2);
        printf("Introduzca la operacion: ");
        scanf(" %c", &signo);
    switch(signo){
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
                        printf("La operacion por 0 es indefinida.");
                        break;
                }
                printf("Division: %d\n", num1 / num2);
                break;
}
}
