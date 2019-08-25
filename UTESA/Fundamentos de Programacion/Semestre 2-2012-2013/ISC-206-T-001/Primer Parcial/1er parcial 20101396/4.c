#include <stdio.h>
#include<stdlib.h>

int pow( int a, int b){
    int total = 1,i;
    for(i = 1; i<= b; i++){
    total *= a;
}
return total;

}
int main()
{
    int numero, potencia, i;

    for(i = 0; i < 3; i++){
        printf("\n Introduzca numero y potencia(numero,potencia) : ");
        scanf("%d,%d", &numero, &potencia);

        printf("\n el numero %d Elevado a %d es %d\n\n", numero, potencia, pow(numero, potencia));
}

return 0;

}


