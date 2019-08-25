#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = '5';
    double b = 8.852963;
    float c = 2.250;
    int d = 8;
    printf("El tamaño del int en bytes es: %d\n", sizeof(d));
    printf("El tamaño del float en bytes es: %d\n", sizeof(c));
    printf("El tamaño del double en bytes es: %d\n", sizeof(b));
    printf("El tamaño del char en bytes es: %d\n", sizeof(a));
    return 0;
}
