
int main()
{
int N, div;
 do
 {
     printf("Introduzca un entero ");
 scanf("%d", &N);
 if(!N)
 break;
 for((div = 2 );div <= sqrt(N) ; div++)
 if(N % div == 0)
  break;
  if(N%div == 0)
  printf("%d no es primo\n", N);
  else
  printf("%d es PRIMO.\n", N);

  }
  while(1);
  return 0; }
