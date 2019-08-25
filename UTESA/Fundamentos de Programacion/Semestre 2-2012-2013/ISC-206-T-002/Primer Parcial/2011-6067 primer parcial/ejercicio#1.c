
main(){
int num=10,i,suma=0,cantidad;

printf("introduzca los numero quieres calcular su promedio: ");

for(i=1;i<=num;i++)
{
 printf("Numero: ");
 scanf("%d",&cantidad);
 cantidad++;
 if ((cantidad<0) && (cantidad>100))
 printf("calificacion invalida");
 else
 suma=suma+cantidad;}
suma=suma/num;
printf("Su promedio es: %d",suma);
}



