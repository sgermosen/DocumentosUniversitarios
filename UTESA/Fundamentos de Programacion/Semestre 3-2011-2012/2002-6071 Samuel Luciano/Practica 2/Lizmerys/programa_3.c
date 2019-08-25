/*Lizmerys Dalisda
2010-5106
8-6-12*/


int main()  {

    int apo;

    printf("ingrese un año \t");
    scanf ("%d",&apo);

   if( (apo % 4 == 0) && (apo % 100 != 0) || (apo % 400 == 0) )
   {
		printf("El año es bisiesto!!\n");
            }
   else if( (apo % 4 != 0) && (apo % 100 != 0) || (apo % 400 != 0) )
   {
		printf ("El año no es bisiesto\n");
		}

   system("pause");

}
