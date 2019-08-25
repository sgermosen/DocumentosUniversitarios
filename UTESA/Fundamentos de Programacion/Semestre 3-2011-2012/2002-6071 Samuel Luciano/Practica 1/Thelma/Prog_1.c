#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char Caracter = 'Q';
	int Var1,Var2;
	float fFloat = 5368.2146;
	double dDouble = 65465.435;
	printf("Digite el primer numero\n");
	scanf("%d",&Var1);
	
	printf("Digite el segundo numero\n");
	scanf("%d",&Var2);

	printf("Caracter: \n");
	printf("%c\n",Caracter);

	printf("Numero uno\n");
	printf("%d\n",Var1);
	
	printf("Numero dos\n");
	printf("%d\n",Var2);
	
	printf("NUmero flotante\n");
	printf("%f\n",fFloat);

	printf("Numero double\n");
	printf("%f\n",dDouble);
	system("pause");	
	return 0;
}
