int main () { // Este ejercicio no cumple con el requerimiento. Debe imprimir los totales de notas, no las notas como tal.

 int calificacion, suma;

 do{

  printf("digite una calificacion: ");
  scanf("%d",&calificacion);

  if(calificacion>100){
   printf("la nota es invalida\n");
  }

  if(calificacion>=70&&calificacion<=79){
   printf("la nota es C\n");
  }
  if(calificacion>=80&&calificacion<=89){
   printf("la nota es B\n");
  }

  if(calificacion>=90&&calificacion<=100){
   printf("la nota es A\n");
  }

   if(calificacion>=37&&calificacion<=69){
   printf("la nota es F\n");
  }




 }while(calificacion>=37);


 }


























