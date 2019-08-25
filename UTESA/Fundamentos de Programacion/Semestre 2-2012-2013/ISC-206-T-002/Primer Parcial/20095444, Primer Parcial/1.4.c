int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int r = 1, i;
    for(i = 1; i <= exponente; i++){
        r = r * base;
    }
    return r;
}
int main(){
    int x, a, b;
    for(x = 0; x < 3; x++){
    printf("Introduzca base: ");
    scanf("%d", &a);
    printf("Introduzca exponente: ");
    scanf("%d", &b);
    printf("Base: %d; \nExponente: %d; \nResultado: %d\n", a, b, potencia(a,b));

    }
}
