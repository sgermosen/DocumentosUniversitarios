
int main()
{   int year;
    printf("Digite el año para comprobar si es bisiesto: ");
    scanf("%d",&year);

    if (year % 4 == 0)
   {
      if (
              (year % 100 == 0)
           && (year % 400 != 0)
         )

         {
             printf("El año NO es bisiesto\n");
         }
         else
         {
            printf("El año es bisiesto\n");
         }
      }
      else
      {
         printf("El año NO es bisiesto \n");
      }

}
