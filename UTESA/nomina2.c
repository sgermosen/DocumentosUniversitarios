  #include<Stdio.h>
		main()
{
int  thrn,thre,l,m,n,j,v,s,d,thrs;
char nombre;
float p1,p2,tp1,tp2,tpa;

printf("\nBienbenido al programa");
printf("\n-------------------------------------------");
printf("\nProgama de la Nomina de pago de un Empleado");
printf("\n-------------------------------------------");

printf("\nDijite el nombre del Empleados:");
scanf("%d",& nombre);
getch ();
Clrscr ();

printf("\nProceda a dijitar las horas trabajada en los dias de la semana");
printf("\n---------------------------------------------------------------");

printf("\nDijite las horas del lunes");
Scantf("%d", & l);
printf("\nDijite las horas del Martes");
Scantf("%d", & m);
printf("\nDijite las horas del Miercoles");
Scantf("%d", & n);
printf("\nDijite las horas del Jueves");
Scantf("%d", & j);
printf("\nDijite las horas del Viernes");
Scantf("%d", & v);
printf("\nDijite las horas del Sabado");
Scantf("%d", & s);
printf("\nDijite las horas del Dominguo");
Scantf("%d", & d);

 if (l>24)
  {
  printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del lunes");
Scantf("%d", & l);
}
else if(m>24)
{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Martes");
Scantf("%d", & m);
	}
else if (n>24)
{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Miercoles");
Scantf("%d", & n);
  }
 else	if (j>24)
	{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Jueves");
Scantf("%d", & j);
	 }
  else if(v>24)
	  {
	  printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Viernes");
Scantf("%d", & v);
}
else if (s>24)
 {
 printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Sabado");
Scantf("%d", & s);
}
else if(d>24)
{
printf("\nError de datos Las Horas de los dia no puede ser mayor que 24");
printf("\nDijite las horas del Dominguo");
Scantf("%d", & d);
}
else
{
Printf("\n Dijite el precio de las horas normales");
scantf("%d", & p1);
Printf("\n Dijite el precio de las horas Extra");
scantf("%d", & p2);
thrs=l+m+n+j+v+s+d;
thrn=l+m+n+j+v+s;
thre=d;
tp1=thrn*p1;
tp2=thre*p2;
tpa=tp1+tp2;


Printf("\n                   Nomina de pago mensual      \n");
printf("\n                  ------------------------     \n");
 printf("\nTotal de Horas Trabajadas================> %d ",thrs);
	printf("\nTotal de Horas Normales================> %d ",thrn);
		printf("\nTotal de Horas Extra================> %d ",thre);
	printf("\nPago por Horas Normales================> %f",tp1);
	printf("\nPago por Hora Extras===================> %f",tp2);
	 printf("\nTotal a Pagar=========================> %f",tpa);
	 }
 return();
 }



