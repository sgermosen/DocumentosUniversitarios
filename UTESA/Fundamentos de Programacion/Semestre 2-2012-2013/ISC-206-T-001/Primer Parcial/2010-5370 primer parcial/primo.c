
int main()
{
	printf("Los numeros primos son: \n");

	int a,i, j, primo = 0;
    scanf("%d",&a);

	for (i = 1; i < a; ++i)
	{
		primo = 1;
		if(i % 2 == 0)
			primo = 0;
		for (j = 2; j < (i/2); ++j)
		{
			if(i % j == 0)
				primo = 0;
		}
		if(primo == 0)
			printf("No Primo: %d\n", i);
		else printf("Primo: %d\n", i);
	}

}
