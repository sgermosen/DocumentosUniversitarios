int main(){
    int num1, num2;
    char oper;
    printf("Introduzca un numero: ");
    scanf("%d", &num1);
    printf("Introduzca otro numero: ");
    scanf("%d", &num2);
    printf("Inrtoduzca el operador: ");
    scanf(" %c", &oper);
    switch(oper){
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
                      printf("error.\n");
                      break;
              }
              printf("Division: %d\n", num1 / num2);
              break;
         default:
              printf("Operacion invalida.");
    }
    system("pause");
}
