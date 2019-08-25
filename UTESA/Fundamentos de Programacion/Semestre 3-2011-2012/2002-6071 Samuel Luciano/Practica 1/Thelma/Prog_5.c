#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a;
	char b;
	float c;
	double d;
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	a = 51654;
	b = 'A';
	c = 455.245483;
	d = 1254543.35421;
	
	system("pause");	
	return 0;
}
