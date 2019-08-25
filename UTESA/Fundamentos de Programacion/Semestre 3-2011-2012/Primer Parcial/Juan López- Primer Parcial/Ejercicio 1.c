int main(){
    int x, y;
    char operacion;
    do {
    printf("Introduzca el primer valor: ");
    scanf("%d", &x);
    printf("Introduzca el segundo valor: ");
    scanf("%d", &y);
    printf("Que operacion desea realizar(+,-,*,/)?: ");
    scanf(" %c", &operacion);
    switch(operacion){
           case '+':
                printf("Suma: %d\n", x + y);
                break;
           case '-':
                printf("Resta: %d\n", x - y);
                break;
           case '*':
                printf("Multiplicacion: %d\n", x * y);
                break;
           case '/':
                if(y == 0)
                printf("La division entre 0 no existe \n");
           else
                printf("Division: %d\n", x / y);
                break;
                }
           }while(operacion != '@');
}
