/* CALCULADORA
Autora: Lorayne Tejada
20095317*/


int main () {
    float valor1, valor2;
    char operacion;
    
        printf("Ingrese la operacion deseada: ");
        scanf(" %c", &operacion);
        printf("Digite valor no.1.: ");
        scanf("%f", &valor1);
        printf("Digite valor no.2: ");
        scanf("%f", &valor2);
    switch(operacion){
           case '+':
                printf("Suma: %1.f\n", valor1 + valor2);
                break;
           case '-':
                printf("Resta: %1.f\n", valor1 - valor2);
                break;
           case '*':
                printf("Multiplicacion: %1.f\n", valor1 * valor2);
                break;
           case '/':
                if(valor2 == 0){
                        printf("Operacion invalida! ");
                        break;
                }
                printf("Division: %1.f\n", valor1 / valor2);
                break;
}

system("pause");
}
