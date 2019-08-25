//miguel mercedes 2007-6033

int main(){
int x, a, y=0;
printf("digite un numero: \n");
scanf("%d", &x);
do{
a=x%10;
y=y+a;
y=y*10;
x=x/10;
}
while (x>0);{

y = y * 10 + (x%10);
x = x / 10;
}

printf("Invertido: %d\n", y);
system("PAUSE");	
return 0;
}
