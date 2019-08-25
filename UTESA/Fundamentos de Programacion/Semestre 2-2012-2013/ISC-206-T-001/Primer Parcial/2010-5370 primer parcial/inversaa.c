int main(){
  long numero, inverso=0, residuo;

   printf("ingrese un numero:\n");
   scanf("%d",&numero);
   residuo=numero;
   while(residuo>0){
   inverso= inverso*10 + residuo % 10;
   residuo /=10;
} printf ("el numero inverso:%d \n",inverso);
}
