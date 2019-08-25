//miguel mercedes 2007-6033
int main() {
    
    int x;
    
 printf("digite el ano para saber si es bisiesto: ");
 scanf("%d",&x);
 
 if (x%4==0 && x%100!=0 || x%400==0) 
 printf("el ano es bisiesto");   
  else
 printf("el ano no es bisiesto");
 printf("\n\n");


   system("pause");
 
 
 
 
    
}
