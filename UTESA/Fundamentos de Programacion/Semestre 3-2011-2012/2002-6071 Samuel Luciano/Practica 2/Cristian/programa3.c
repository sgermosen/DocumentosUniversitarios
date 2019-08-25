int main()
{
    int year;
    
    printf("ingrese un año:");
    scanf ("%d",&year);
    
   if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
   { printf("\nel año es bisiesto\n");
            } else if((year % 4 != 0) && (year % 100 != 0) || (year % 400 != 0))
            {printf ("\nel año no es bisiesto\n");}
   system("PAUSE");
    
}
