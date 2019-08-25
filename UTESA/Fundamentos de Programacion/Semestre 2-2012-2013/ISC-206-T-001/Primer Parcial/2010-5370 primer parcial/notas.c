int main()
{ printf("digite 10 numeros:\n");
	int a,acum, c,d;

	scanf("%d", &a);

	int i = 0;
	for(i = 0; i < 9; i++)
	{
	acum=a ;
		scanf("%d", &a);
		if(a < 100 && a>=0)
		c=acum+=a;
		d=c/10;

	}

	printf("%d", acum);
}
