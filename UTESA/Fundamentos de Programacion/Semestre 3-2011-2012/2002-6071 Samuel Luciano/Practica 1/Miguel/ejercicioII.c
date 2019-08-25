#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x=0, y=0;
  float z=0;
  
  printf(" digite el primer valor: ");
  scanf("%d",&x);
  
  printf(" digite el segundo valor: ");
  scanf("%d",&y);
  
  printf(" los valores digitados son %d y %d\n",x,y);
  
  z=x+y;
  printf(" el valor de la suma es: %f\n",z);
  
  z=x-y;
  printf(" el valor de la resta es: %f\n",z);
  
  z=x*y;
  printf(" el valor de la multiplicacion es: %f\n",z);
  
  z=x/y;
  printf(" el valor de la division es: %f\n",z);
  
  
  
  system("PAUSE");	
  return 0;
}
