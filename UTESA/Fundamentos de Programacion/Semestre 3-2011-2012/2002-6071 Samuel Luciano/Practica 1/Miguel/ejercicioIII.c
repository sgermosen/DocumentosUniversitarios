// MIguel Mercedes 2007-6033
// practica I ejercicio 3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x, y,z;
  printf("programa que indica la comparacion de dos valores, dando positvo el valor (1) y negativo el valor (0)\n\n");
  
  printf("digite el primer valor: ");
  scanf("%d",&x);
  
  printf("digite el segundo  valor: ");
  scanf("%d",&y);
  
  printf("si su primer valor es menor al segundo valor su comparacion es: %d\n",x<y);
  
  printf("si su primer valor es menor o igual al segundo valor su comparacion es: %d\n",x<=y);
  
  printf("si su primer valor es mayor al segundo valor su comparacion es: %d\n",x>y);
  
  printf("si su primer valor es mayor o igual al segundo valor su comparacion es: %d\n",x>=y);
  
  printf("el residuo del primer valor al segundo valor su comparacion es: %d\n",x%y);
  
  printf("si su primer valor es igual al segundo valor su comparacion es: %d\n",x==y);
  
  printf("si su primer valor es diferente al segundo valor su comparacion es: %d\n",x!=y);
  
    
  system("PAUSE");	
  return 0;
}
