int main(){
    char opcion;
    int num1, num2;
    while (opcion != '@') {
    printf("Para cerrar la calculadora digite @\n\n");
    printf("Introduzca primer digito:");
    scanf("%d", &num1);
    printf("Introduzca segundo digito:");
    scanf("%d", &num2);
    printf("Introduzca una operacion valida (+, -, *, /)\n");
    scanf("%s", &opcion);
    if(opcion == '@'){
            break;
        }
    switch(opcion){
        case '+':
            printf("%d + %d = %d\n\n\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%d - %d = %d\n\n\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("%d * %d = %d\n\n\n", num1, num2, num1*num2);
            break;
        case '/':
            if(num2 != 0){
            printf("%d / %d = %d\n\n\n", num1, num2, num1/num2);
            }else {
                    printf("Error!");
                }
            break;

    }
    }

}
