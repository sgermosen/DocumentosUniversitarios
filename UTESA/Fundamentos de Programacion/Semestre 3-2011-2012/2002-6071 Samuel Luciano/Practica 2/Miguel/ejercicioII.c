//miguel mercedes 2007-6033
int main() {
    
float x,y;
float z;

int operacion;

 
 printf("digite el primer valor: ");
 scanf("%f",&x);
 
 printf("digite el segund valor: ");
 scanf("%f",&y);

   printf("digite la operacion que quiere realizar\n",operacion);
   printf("1-suma\n");
   printf("2-resta\n");
   printf("3-multiplicacion\n");
   printf("4-division\n");
   scanf("%d",&operacion);
   
  
     
 switch(operacion){
             case 1: z=x+y; 
                  printf(" la suma es: %.2f",z);
                  break;
             case 2:z=x-y;                  
                  printf(" la resta es: %.2f",z);
                  break;
             case 3: z=x*y;                  
                  printf(" la multiplicacion es: %.2f",z);
                  break;
             case 4:
                  z=x/y;
                  if(y==0)                  
                  printf("ERROR MATEMATICO"); 
                  else                                                                                
                  printf(" la division es: %.2f",z);                
                  break;
                  
                                     
                  }
                  printf("\n\n");
 
 
 
 
 
  
    system("pause");
    
    
}
