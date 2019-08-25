/*Lizmerys Dalisda
2010-5106
8-6-12*/



int main (){
	int num1, num2;
	char operacion;


	printf ("Introduzca la operacion\n");
	scanf ("%c", &operacion);

	printf ("Introduzca un numero\n");
	scanf ("%d", &num1);

	printf ("Introduzca otro numero\n");
	scanf ("%d", &num2);

	switch (operacion){
		case '+':
			 printf ("%d\n", num1+num2);
			 break;
		case '-':
			 printf ("%d\n", num1-num2);
			 break;

        case '*' :
			printf ("%d\n", num1*num2);
			break;

        case '/' :
				 if (num2 ==0){ printf ("Indeterminado\n");  break;  }
           	printf ("%d\n", num1/num2);
		default:	printf ("Error de datos");

	}
         system ("pause");
}


