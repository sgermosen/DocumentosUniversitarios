/*Programa creado por Alvin Del Rosario(2009-5076)
Fecha de creacion 29-5-2012;Fecha de Entrega (2-6-2012)
SD -ISC206 -T -003; SAMUEL A. LUCIANO L.*/
int main() {
    printf("NOTA IMPORTANTE: El primer valor debe ser mayor que el segundo...\n\n");
    int numero1, numero2, numero3;
    printf("Introduzca primer valor(luego presione enter)=");
    scanf("%d", &numero1);
    printf("Introduzca segundo valor(luego presione enter)=");
    scanf("%d", &numero2);
    printf("Introduzca tercer valor(luego presione enter)=");
    scanf("%d", &numero3);
    int resultado1 = numero1 + numero2;
    int resultado2 = numero2 - numero3;
    int resultado3 = numero1 * numero2 * numero3;
    double resultado4 = numero1 / numero2;
    double resultado5 = numero1 % numero2;
    printf("\n\nResultado de la suma del valor 1 + valor 2= %d\n", resultado1);
    printf("Resultado de la resta del valor 2 - valor 3= %d\n", resultado2);
    printf("Resultado de la multiplicacion de los 3 valores= %d\n", resultado3);
    printf("Cociente de la division del valor 1 entre el valor 2= %.2f\n", resultado4);
    printf("Residuo de la division anterior= %.2f\n", resultado5);
    system("pause");
    }
