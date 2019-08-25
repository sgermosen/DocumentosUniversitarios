#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularPotencia(int n, int p){
int pot = 0;

pot = pow(n,p);

return pot;

}

int main()
{
    int numero = 0, i = 0, potencia = 0, res = 0;
    while(i < 3)
    {
        printf("Ingrese el numero: \n");
        scanf("%d",&numero);
        printf("Ingrese la potencia: \n");
        scanf("%d",&potencia);
        if((numero > 0) && (potencia > 0))
        {
            res = calcularPotencia(numero, potencia);
            printf("\n La potencia es %d: \n \n", res);
            i++;

        }


    }

    return 0;
}
