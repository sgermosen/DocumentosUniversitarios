/* Evaluacion de una expresion
Claudia Rodriguez Roque
2008-5605 */ 

int main (){
   
  
   double resultado1 = (5*(3 + 6)/2) - (((8 + 5 - 6)*9)%2);
   printf("Resultado = %f\n", resultado1); 
   int resultado2 = (3 <= 10) >= ((3*8) - 10);
   printf("Resultado = %d\n", resultado2); 
   int resultado3 = ((99 > 12) && (56 <= 10)) || (89 != 0) && (5 == 5); // si pongo el >=1 me da error
   printf("Resultado = %d\n", resultado3); 
   
    system("pause");
}
