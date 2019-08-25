int main () {

  int x,y,z;

  printf("digite un valor: ");
  scanf("%d",&x);

  printf("digite un valor: ");
  scanf("%d",&y);

  printf("digite un valor: ");
  scanf("%d",&z);


  if(x<y && y<z || z<y && y<x){ // Es recomenable utilizar los parentesis en estos casos para evitar confusiones.
  printf("los numero estan orden");
  } else
  printf("los numero no estan orden");








}
