
int main()
 {
  int base;
  int exponente;


  printf("\nIntroduzca la base: ");
  scanf("%d", &base);
  printf("\nIntroduzca el exponente: ");
  scanf("%d", &exponente);


  printf("\n%d elevado a la %d es: %d\n", base, exponente, Potencia(base, exponente));
  }







 int Potencia( int x, int y )
 {
 int i = 0;
 int pot = 1;

 while( i < y )
 {
 pot = pot*x;
 i++;
 }

 return (pot);
 }

