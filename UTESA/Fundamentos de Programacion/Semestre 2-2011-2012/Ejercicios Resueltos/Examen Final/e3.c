int main(){
    int a, b, c, numero, aux;
    for(numero = 999;numero >= 100;numero--){
               aux = numero;
               a = aux % 10;
               aux = aux / 10;           
               b = aux % 10;
               aux = aux / 10;
               c = aux;
               
               if(numero == ((a*a*a)+(b*b*b)+(c*c*c))){
                         printf("\n");
                         printf("Primer digito: %d\n", c);
                         printf("Segundo digito: %d\n", b);
                         printf("Tercer digito: %d\n", a);
                         printf("Numero: %d\n", numero);          
                         printf("\n");
               }
    }
    system("pause");    
}
