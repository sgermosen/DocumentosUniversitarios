int main(){

int num1, num2, operacion;
Printf("Introdusca el primer valor: ");
scanf("%d", &num1);
printf("Introdusca el segundo valor: ");
scanf("%d", &num2);
printf("Operacion a realizar: +,-, *,/")
scanf("%c", operacion);

char operacion = 'z';
    printf("introduzca una opcion: ");
    scanf("%c", &operacion);

switch(opcion){
    case '+':
    printf("%d", num1 + num2);
    break;
    case '-':
    printf("%d", num1 - num2);
    break;
    case '*':
    printf("%d", num1 * num2);
    break;
    case '/':
    printf("%d", num1 / num2);
    break;

}
}
