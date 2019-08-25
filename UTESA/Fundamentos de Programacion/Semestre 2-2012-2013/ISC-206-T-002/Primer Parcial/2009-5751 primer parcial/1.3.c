#include<stdio.h>
#include<conio.h>

main(){
 float a;
 float b;
 float c;
 char d;

 printf("Presione \n a para sumar \n b para restar \n c para multiplicar \n d para dividir \n");
 scanf ("%c", &d);
 scanf("%f", &a);
 scanf("%f", &b);

 if(d =='a')
{
    c= a + b;
}
 if(d =='b')
 {

    c= a - b;
 }
 if(d =='c')
 {

   c= a * b;
 }
 if (d =='d')
 {

     c= a / b;

 }
 printf(" resultado es %f\n",c);

}


