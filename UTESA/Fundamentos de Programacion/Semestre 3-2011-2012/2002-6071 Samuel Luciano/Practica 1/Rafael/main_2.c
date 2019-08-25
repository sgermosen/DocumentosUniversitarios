#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Introduzca el valor de la primera variable int: ");
    scanf("%d", &a);
    printf("Introduzca el valor de la segunda variable int: ");
    scanf("%d", &b);
    if (a>b)
        printf("%d > %d \n", a, b);
    if (a<b)
        printf("%d < %d \n", a, b);
    if (a>=b)
        printf("%d >= %d \n", a, b);
    if (a<=b)
        printf("%d <= %d \n", a, b);
    if (a==b)
        printf("%d == %d \n", a, b);
    if (a!=b)
        printf("%d != %d \n", a, b);
    return 0;
}
