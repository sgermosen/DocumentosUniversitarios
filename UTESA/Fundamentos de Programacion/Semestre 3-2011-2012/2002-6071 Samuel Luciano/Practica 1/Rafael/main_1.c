#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Introduzca el valor de la primera variable int: ");
    scanf("%d", &a);
    printf("Introduzca el valor de la segunda variable int: ");
    scanf("%d", &b);
    printf("Introduzca el valor de la tercera variable int: ");
    scanf("%d", &c);
    printf("\n%d + %d + %d = %d \n", a, b, c, a + b + c);
    printf("%d - %d - %d = %d \n", a, b, c, a - b - c);
    printf("%d * %d * %d = %d \n", a, b, c, a * b * c);
    printf("%d / %d = %d \n", a, b, a / b);
    printf("El residuo de la operacion anterior es: %d\n", a%b);
    return 0;
}
