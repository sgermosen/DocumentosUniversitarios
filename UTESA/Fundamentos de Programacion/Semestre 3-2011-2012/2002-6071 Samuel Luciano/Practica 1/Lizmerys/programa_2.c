/*LIZMERYS DALISDA
2010-5106
1-6-2012*/


int main()
{
	int hola, hello, hallo;
	printf("Digite el valor de la variable hola\n");
	scanf ("%d",&hola);
	printf("Digite el  valor de la variable hello\n");
	scanf ("%d", &hello);
	printf ("Digite el valor de la variable hallo\n");
	scanf ("%d", &hallo);

	printf("Esta es la suma de las tres variables\n");
	printf ("%d\n",hola+hello+hallo);
	printf("Esta es la resta de las tres variables\n");
	printf ("%d\n",hola-hello-hallo);
	printf("Esta es la multiplicacion de las tres variables\n");
	printf ("%d\n",hola*hello*hallo);
	printf("Esta es la division de las tres variables\n");
	printf ("%d\n",hola/hello/hallo);
	printf("Este es el residuo de la divison de las dos primeras variables\n");
	printf ("%d\n",hola%hello);

	system("pause");

}
