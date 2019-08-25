#include <stdio.h>
#include <stdlib.h>

void determinarPrimos(int l){
    int i = 0;
    for(i=1;i<l;i++)
    {
        if(i == 2)
        {
            printf("\n %d es primo", i);
        }
        if((i%2 != 0) && (i != 1))
        {
            printf("\n %d es primo", i);
        }

    }



}

int main()
{
    int num = 0, limite = 0;
    printf("Introduzca el limite :\n");
    scanf("%d", &limite);
    determinarPrimos(limite);

    return 0;
}
