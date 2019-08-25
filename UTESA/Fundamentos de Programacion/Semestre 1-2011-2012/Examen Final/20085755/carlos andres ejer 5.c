int potencia(int base, int exponente);
int potencia(int base, int exponente){
             int resultado = 1, i = 1;
             for(i;i <= exponente;i++){
                     resultado = resultado + base;
                     }
                     return resultado;
}
int main(){
    int var1, var2;
    printf("introducir la base: ");
    scanf("%d", &var1);
    printf("introducir el exponente: ");
    scanf("%d", &var2);
    printf("la potencia es igual a %d/n.", potencia(var1,var2));
    printf("intoducir la base: ");
    scanf("%d", &var1);
    printf("introducir el exponente: ");
    scanf("%d", &var2);
    printf("la potencia es igual a %d/n.", potencia(var1,var2));
    system("pause");
}
