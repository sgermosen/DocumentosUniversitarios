int main( )

{

int num1, num2, num3;

printf("INTRODUZCA UN PRIMER NÚMERO ENTERO: ");

scanf("%d",&num1);

printf("INTRODUZCA UN SEGUNDO NÚMERO ENTERO: ");

scanf("%d",&num2);

printf("INTRODUZCA UN TERCER NÚMERO ENTERO: ");

scanf("%d",&num3);

if((num1>num2)&&(num1>num3))

printf("EL PRIMER ENTERO ES MAYOR QUE LOS OTROS DOS");

else

if((num2>num1)&&(num2>num3))

printf("EL SEGUNDO NÚMERO ES MAYOR QUE LOS OTROS DOS");

else

if((num3>num1)&&(num3>num2))

printf("EL TERCER NUMERO ES MAYOR QUE LOS OTROS DOS");

}

