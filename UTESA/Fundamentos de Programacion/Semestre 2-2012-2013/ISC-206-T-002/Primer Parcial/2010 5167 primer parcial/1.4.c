


int potencia(int base, int exponente);

int potencia(int base, int exponente){
   int r = 1, i;
   for(i = 1; i <= exponente; i++){
       r = r * base;
   }
   return r;

}
int main(){
   int i, a, b;
   for(i = 0; i < 3; i++){
   printf("Introducir La Base: ");
   scanf("%d", &a);
   printf("Introducir El Exponente: ");
   scanf("%d", &b);
   printf("La Potencia Calculada Es: %d\n\n", potencia(a,b));

   }
}

