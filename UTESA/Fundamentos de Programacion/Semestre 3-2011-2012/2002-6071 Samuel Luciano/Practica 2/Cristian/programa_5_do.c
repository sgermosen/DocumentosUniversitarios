int main(){
      int digito,numero;
 
      printf( " Ingrese numero: " );
      scanf( "%d", &numero );
 
      printf( " Su numero invertido es: " );
 
      while( numero > 0 )
      {
            digito = numero % 10;
            numero /= 10;
            printf( "%d", digito );
      }
 
      system("pause");
}
    
