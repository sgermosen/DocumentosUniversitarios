/* Inversion de digitos
Claudia Rodriguez 
2008-5605*/

int main(){
    
    int num01, num02, A, B, C, D, X;
       printf("Introducir un numero: "); 
    scanf("%d", &num01);
   
   X = 0;
   num02 = num01;
   
      do {
       X = X + 1;
       A = num02 % 10;
       num02 = num02 / 10;
       
} while (num02 > 0); 


   do {
    
       A = num01 % 10;
       num01 = num01 / 10;
       
   if(X == 2){ A = A * 10;}
   if(X == 3){ A = A * 100;}
   if(X == 4){ A = A * 1000;}
   if(X == 5){ A = A * 10000;} 
   num02 = num02 + A;        
   X = X - 1;
    
} while (num01 > 0); 
     
      printf("Numero alreves: %d\n ", num02); 
           
    system("pause");
}
