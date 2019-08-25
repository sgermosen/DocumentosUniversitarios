#include <stdio.h>
#include <stdlib.h>

int main()
{
    int milesima = 0, centena = 0, decena = 0, unidad = 0, num = 0;
    do{
       printf("\n Ingrese un numero entre 1 y 9999: \n");
       scanf("%d", &num);
      }
    while((num < 1 ) || (num > 10000));

    milesima = num/1000; //milesima

    centena = (num/100)%10;

    decena = (num/10)%10;

    unidad = num%10; //unidad


    printf("\n Numero Invertido: %d%d%d%d ", unidad, decena, centena, milesima);
    //scanf("%d", &num);

    return 0;
}
