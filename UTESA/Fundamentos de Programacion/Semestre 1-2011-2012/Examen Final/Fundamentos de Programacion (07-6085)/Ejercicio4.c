int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int result = 1, i = 1;
    for(i;i <= exponente;i++){
            result = result * base;
}
            return result;
}


int main(){
    int var1, var2;
    printf("Introduzca la base de la potencia\n");
    scanf("%d", &var1);
    printf("Introduzca el exponente de la potencia\n");
    scanf("%d", &var2);
    printf("El resultado de esta potencia es %d\n\n", potencia(var1,var2));
    
    
    system("pause");   
}                            
