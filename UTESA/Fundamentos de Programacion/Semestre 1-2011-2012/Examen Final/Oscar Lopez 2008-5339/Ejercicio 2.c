int main(){
    int operador1, operador2, operador3;
    printf("Introducir un valor: ");
    scanf("%d", &operador1);
    printf("Introducir un valor: ");
    scanf("%d", &operador2);
    printf("introdusca un valor: ");      
    scanf("%d", &operador3);
    int suma = operador1 + operador2 + operador3;
    printf("suma = %d\n", suma);
    int resta = operador1 - operador2 - operador3;
    printf("resta = %d\n", resta);
    int multiplicacion = operador1 * operador2 * operador3;
    printf("multiplicacion = %d\n", multiplicacion);
    int division = operador1 / operador2 / operador3;
    printf("division = %d\n", division);
    system("pause");
}
