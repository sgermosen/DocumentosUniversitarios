//miguel mercedes 2007-6033
// practica I - ejercicio IV

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,c;
  a = (5*(3+6)/2)-(((8+5)*9/3)%2);
  b = (3<=10)>=((3*8)-10);
  c = (((99>12)&&(56<=10))|(89!=0)&&((5==5)>=1));
  
  printf("de la operacion:[(5*(3+6)/2)-(((8+5)*9/3)%2]; el resultado es: %d\n",a); 
  
  printf("de la operacion:[(3<=10)>=((3*8)-10)]; el resultado es: %d\n",b); 
  
  printf("de la operacion: [(((99>12)&&(56<=10))|(89!=0)&&((5==5)>=1))]; el resultado es: %d\n",c);   
  
  system("PAUSE");	
  return 0;
}
