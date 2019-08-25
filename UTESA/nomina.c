#include<Stdio.h>
 main()
 {
 
int  thrn,thre,l,m,n,j,v,s,d,thrs,p;
float p1,p2,tp1,tp2,tpa;
23 printf("\nBienbenido al programa");
printf("\n-------------------------------------------");
printf("\nProgama de la Nomina de pago de un Empleado");
printf("\n-------------------------------------------");




printf("\nProceda a dijitar las horas trabajada en los dias de la semana");
printf("\n---------------------------------------------------------------");

printf("\nDijite las horas del lunes");
scanf("%i", &l);

if (l>=25)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del lunes");
scanf("%d", & l);
} while (l >= 25) ;
}


printf("\nDijite las horas del Martes");
scanf("%d", & m);

if (m>=24)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Martes");
scanf("%d", & m);
} while (m >= 25) ;
}

printf("\nDijite las horas del Miercoles");
scanf("%d", & n);

if (n>=25)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Miercoles");
scanf("%i", &n);
} while (n>=25) ;
}
printf("\nDijite las horas del Jueves");
scanf("%i", & j);
if (j>=25)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Jueves");
scanf("%i", & j);
} while (j >= 25) ;
}

printf("\nDijite las horas del Viernes");
scanf("%i", & v);
if (v>=25)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Viernes");
scanf("%i", & v);
} while (v >= 25) ;
}

printf("\nDijite las horas del Sabado");
scanf("%i", & s);

if (s>=25)
{
do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Sabado");
scanf("%i", & s);
} while (s >=25) ;
}

printf("\nDijite las horas del Dominguo");
scanf("%i", & d);
 if (d>=25)
{
 do{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Dominguo");
scanf("%i", & d);
} while (d >=24) ;
}
clrscr();
printf("\n Dijite el precio de las horas normales");
scanf("%f", & p1);
printf("\n Dijite el precio de las horas Extra");
scanf("%f", & p2);
thrs=l+m+n+j+v+s+d;
 thrn=l+m+n+j+v+s;
  thre=d;
	tp1=thrn*p1;
 tp2=thre*p2;
 tpa=tp1+tp2;
clrscr();

printf("\n                   Nomina de pago mensual             ");
printf("\n                  ------------------------     ");
printf("\n                  ------------------------     ");
	printf("\nTotal de Horas Trabajadas==============>% i ",thrs);
	printf("\nTotal de Horas Normales================>% i ",thrn);
	printf("\nTotal de Horas Extra===================>% i ",thre);
	printf("\nPago por Horas Normales================>%.2f",tp1);
	printf("\nPago por Hora Extras===================>%.2f",tp2);
	printf("\nTotal a Pagar==========================>%.2f",tpa);
	 getch();
	 clrscr();
	 printf("\nDesea Continual  1. Si  2. No");
	 scanf ("%i", &p);
	  switch p:

	  case 1:
		goto 23 ;

		case 2:


	 printf("\n--------------------Cerrando el programa----------------------");
	 exit();

	 default
	 printf ("\n Opcion no valida");
	 }






