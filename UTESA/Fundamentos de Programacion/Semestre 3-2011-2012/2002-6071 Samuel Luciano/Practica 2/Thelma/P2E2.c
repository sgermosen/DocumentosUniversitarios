int main(){
int T,L,RESULTADO;
char H;
do{printf("Introduzca el valor de A:");
scanf("%d",&T);
printf("Introduzca el valor de B:");
scanf("%d",&L);
printf("Que operación desea realizar:");
scanf("%s",&H);
if(H=='@')
{printf("Error,Intente otra vez.\n" );}
switch(H)
{case '+':
RESULTADO=T+L;
printf("%d + %d = %d\n",T,L,RESULTADO);
break;
case '-':
RESULTADO=T-L;
printf("%d - %d = %d\n",T,L,RESULTADO);
break;
case '/':
RESULTADO=T/L;
printf("%d / %d = %d\n",T,L,RESULTADO);
break;
case '*':
RESULTADO=T*L;
printf("%d x %d = %d\n",T,L,RESULTADO);
break;
defalut:
printf("No VALIDO\n");
break;}}while (H=='@');
}
