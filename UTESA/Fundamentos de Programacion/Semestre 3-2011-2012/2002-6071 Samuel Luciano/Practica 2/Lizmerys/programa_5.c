/*Lizmerys Dalisda
2010-5106
8-6-12*/


int main() {

    int num, num1;

    printf("Digite el numero que desea invertir\n");
    scanf("%d",&num1);

    printf ("El resultado es\n");

    while( num1 > 0 )
	  {
       num = num1 % 10;
       num1 /= 10;
       printf( "%d", num );
      }

}
