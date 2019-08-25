
/*Lizmerys Dalisda
2010-5106
8-6-12*/



int main(){
    int mes;
    printf("introduzca un numero del mes: ");
    scanf("%d",&mes);
	if ( mes >= 13){ printf ("No aplicable");}
	 else if ( mes == 12){printf ("Diciembre tiene 31 dias\n");}
	 else if ( mes == 11){printf ("Noviembre tiene 30 dias\n");}
         else if ( mes == 10){printf ("Octubre tiene 31 dias\n");}
	 else if ( mes == 9){printf ("Septiembre tiene 30 dias\n");}
	 else if ( mes == 8){printf ("Agosto tiene 31 dias\n");}
         else if ( mes == 7){printf ("Julio tiene 31 dias\n");}
	 else if ( mes == 6){printf ("JUnio tiene 30 dias\n");}
         else if ( mes == 5){printf ("Mayo tiene 31 dias\n");}
	 else if ( mes == 4){printf ("Abril tiene 30 dias\n");}
         else if ( mes == 3){printf ("Marzo tiene 31 dias\n");}
         else if ( mes == 2){printf ("Febrero tiene 28 dias\n");}
         else if ( mes == 1){printf ("Enero tiene 31 dias\n");}

         system ("Pause");

}
