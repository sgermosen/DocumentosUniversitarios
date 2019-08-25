int main() {
    printf("+. Suma\n");
    printf("-. Resta\n");
    printf("*. Multiplicacion\n");
    printf("/. Division");
    char opcion = 'z';
    printf("Introduzca una opcion: ");
    scanf("%+", &opcion);
    scanf("%-", &opcion);
    scanf("%*", &opcion);
    scanf("%/", &opcion);
    switch(opcion){
        case '+':
            printf("%d\n", _num1 + _num2);
            break;
        case '-':
            printf("%d\n", _num1 - _num2);
            break;
        case '*':
            printf("%d\n", _num1 * _num2);
            break;
        case '/':
            printf("%f\n", (float)_num1 / _num2);
            break;
    }

}
