int main(){
int a,b,c,d,e,f,g;
printf("introduzca un monto: ");
scanf("%d",&a);
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
printf("El monto invertido es: %d%d%d%d\n\n",b,d,f,g);
system("PAUSE");}
