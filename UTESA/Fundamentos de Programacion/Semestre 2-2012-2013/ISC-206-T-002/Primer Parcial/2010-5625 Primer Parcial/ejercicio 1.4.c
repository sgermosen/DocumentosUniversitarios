void pot(int base, int exp)
{
	int e = exp;
	int b = base;

	if(e != 0)
		while(e > 1)
		{
			b *= exp;
			e--;
		}
	else b = 1;
	printf("%d elevado a la %d es: %d\n", base, exp, b);
}

int main()
{
	int a,b,c,d,e,f;

	printf("Escriba la primera base y su exponente\n");
	scanf("%d %d", &a, &b);
	pot(a, b);
	printf("Escriba la segunda base y su exponente\n");
	scanf("%d %d", &c, &d);
	pot(c, d);
	printf("Escriba la tercer base y su exponente\n");
	scanf("%d %d", &e, &f);
	pot(e, f);


	return 0;
}
