#include <stdio.h>
#include <stdlib.h>

int main ()  
{
	int a, b;
	printf("Digite los valores de cada variable\n");
	scanf ("%d", &a);
    scanf ("%d", &b);
    
    printf ("\n");
    if(a > b)
    {
		printf("A > B\n");
	}
	else if(a < b)
	{
		printf("A < B\n");
	}
	else if(a >= b)
	{
		printf("A >= B");
	}
	else if(a <= b)
	{
		printf("A <= B");
	}
	else if(a == b)
	{
		printf("A = B");
	}
	else if(a != b)
	{
		printf("A != B");
	}
    system ("pause");
}
