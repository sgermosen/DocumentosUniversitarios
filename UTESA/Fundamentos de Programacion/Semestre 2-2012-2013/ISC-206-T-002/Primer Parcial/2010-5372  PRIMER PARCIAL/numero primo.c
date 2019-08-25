int main(void)
{
    int x,a,b,i=1,k;
    printf("El programa calcula los 50 primeros numeros primos y no primos\n");

    for(a=1; a<=50; a++)
    {
        k=0;
        for (i=1; i<=50; i++)
        {
            x=a%i;
            if(x==0)
            {
                k=k+1;
            }
        }
        if(k==2)
        printf("\n%d\tEs primo",a);
        else
        printf("\n%d\tEs NO primeo",a);
    }
    printf("\n");

    return 0;
}
