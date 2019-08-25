int main () {


 int numero, i, j,primo=1, ultimo;

printf("digite los ultimos 2 digitos de la primera parte de su matricula matricula : ");
scanf("%d",&ultimo);

printf("digite los ultimos 6 digitos de su matricula : ");
scanf("%d",&numero);
/*i sera = ultimo por tanto buscara los valores evaluado desde su ultima 2 matricula
hasta las ultimas 4 */
for(i=ultimo;i<=numero;i++){

 for(j=i-1;j>=2;j--){
   if(i%j==0){
     primo=0;
     break;
     }
   }

   if(primo==1){
       printf("%d es primo\n",i);
       }
       primo=1;
 }






}
