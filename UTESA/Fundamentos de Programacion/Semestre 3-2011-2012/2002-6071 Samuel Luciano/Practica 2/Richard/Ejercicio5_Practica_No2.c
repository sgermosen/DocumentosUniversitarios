int main()
{
    int numero;
    printf("Digite el numero que desea invertir: ");
    scanf("%d",&numero);
    int i=0;
    do
    {
        printf("%d",(numero%10));
        numero= numero/10;
        i++;
    }
    while(numero!=0);
}
