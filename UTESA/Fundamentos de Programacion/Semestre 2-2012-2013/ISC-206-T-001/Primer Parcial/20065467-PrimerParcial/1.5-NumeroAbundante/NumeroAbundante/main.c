#include <stdio.h>
#include <stdlib.h>

void esAbundante(int n){
  int i =1, sumaDivisores = 0, abundacia =0;
  for(i=1;i<=n;i++)
  {
     if((i%2) == 0)
     {
        sumaDivisores = sumaDivisores + i;

     }

  }

  abundacia = sumaDivisores;
  if(sumaDivisores > abundacia)
  {
      printf("\nEl numero ES Abundante\n");

    if(abundacia > 1)
    {

      printf("\nEl numero ES Quasiperfecto \n");
    }
    else
    {
        printf("\nEl numero NO Quasiperfecto \n");
    }

  }
  else
  {
      printf("\nEl numero NO es Abundante\n");
  }


}
int main()
{
    int num = 0;
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    esAbundante(num);

    return 0;
}
