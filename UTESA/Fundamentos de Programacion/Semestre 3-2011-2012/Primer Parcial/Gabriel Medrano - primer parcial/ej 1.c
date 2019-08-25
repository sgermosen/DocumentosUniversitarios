int main(){
int numero1, numero2;
char operacion;
do {
printf("Introduzca un primer valor: ");
scanf("%d", &numero1);
printf("Introduzca un segundo valor: ");
scanf("%d", &numero2);
printf("Desea realizar la operacion de: ");
scanf(" %c", &operacion);
switch(operacion){
    case '+':
            printf("Suma: %d\n", numero1 + numero2);
        break;
case '-':
    printf("Resta: %d\n", numero1 - numero2);
        break;
    case '*':
        printf("Multiplicacion: %d\n", numero1 * numero2);
    break;
    case '/':
    if(numero2 == 0)
    printf("La division no puede realizarse entre 0\n");
    else
        printf("Division: %d\n", numero1 / numero2);
        break;
                }
    }while(operacion != '@');
    printf("fin del programa\n");

    system("pause");
}

