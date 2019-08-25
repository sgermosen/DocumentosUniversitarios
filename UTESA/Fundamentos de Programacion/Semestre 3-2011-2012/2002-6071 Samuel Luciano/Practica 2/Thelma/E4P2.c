int main()
{
    int num1,num2,num3,num4;
    printf("Digite el primer valor : \n");
    scanf("%d",&num1);
    printf("Digite el segundo valor : \n");
    scanf("%d",&num2);
    printf("Digite el tercer valor : \n");
    scanf("%d",&num3);
    printf("Digite el cuarto valor : \n");
    scanf("%d",&num4);

    if(num4>=5)
    {
        num3= num3 + 1;
        num4=0;
    }
    if(num3>=5)
    {
        num2= num2 + 1;
        num3=0;
    }
    if(num2>=5)
    {
        num1= num1 + 1;
        num2=0;
    }
    printf("Se redondea a:%d%d%d%d\n",num1,num2,num3,num4);
    }
