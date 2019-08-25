int main () {

        float valor1, valor2;
        printf("Ingrese primer valor: ");
        scanf("%f", &valor1);
        printf("Ingrese segundo valor:");
        scanf("%f", &valor2);
            char operacion;
            printf("Ingrese la operacion deseada: ");
            scanf(" %c", &operacion);
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
                        printf("ERROR! No se pudo ejecutar la operacion ");
                        break;
                }
                printf("Division: %1.f\n", valor1 / valor2);
                break;
}
}
