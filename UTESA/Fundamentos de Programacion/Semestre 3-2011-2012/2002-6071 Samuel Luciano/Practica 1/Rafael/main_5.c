#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = '5';
    int b, c;
    printf("Introduzca el valor de la primera variable int: ");
    scanf("%d", &b);
    printf("Introduzca el valor de la segunda variable int: ");
    scanf("%d", &c);
    float d = 5368.2146;
    double e = 20.8525215;
    printf("El valor guardado en la variable char es: %c \n", a);
    printf("El valor guardado en la primera variable int es: %d \n", b);
    printf("El valor guardado en la segunda variable int es: %d \n", c);
    printf("El valor guardado en la variable float es: %f \n", d);
    printf("El valor guardado en la variable double es: %f \n", e);
    return 0;
}
