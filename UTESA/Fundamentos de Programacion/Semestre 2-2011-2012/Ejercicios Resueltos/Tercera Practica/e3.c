int main(){
    int n1, n2;
    char op;
    while(1){
             printf("Introduzca un numero: ");
             scanf("%d", &n1);
             printf("Introduzca un numero: ");
             scanf("%d", &n2);
             printf("Introduzca el operador: ");
             scanf(" %c", &op);
             if(op == '@'){
                   break;      
             }
             switch(op){
                        case '+':
                            printf("Suma: %d\n", n1 + n2);     
                            break;
                        case '-':
                            printf("Resta: %d\n", n1 - n2);     
                            break;
                        case '*':
                            printf("Multiplicacion: %d\n", n1 * n2);     
                            break;
                        case '/':
                            if(n2 == 0){
                                  printf("Division por 0 es indefinida.\n");
                                  break;
                            }
                            printf("Division: %d\n", n1 / n2);     
                            break;
                        default:
                            printf("Operacion invalida\n");     
                            break;
             }
    }
    system("pause");    
}
