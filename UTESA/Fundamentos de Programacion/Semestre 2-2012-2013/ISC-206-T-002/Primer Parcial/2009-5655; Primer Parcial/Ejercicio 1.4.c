int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int r = 1, i;
    for(i = 1; i <= exponente; i++){
        r = r * base;
    }
    return r;
}
int main(){
    int base, expo;
    int a;
    for(a=1; a<=3; a++)
    {
    printf("Introduzca una base: ");
        scanf("%d", &base);
    printf("Introduzca un exponente: ");
        scanf("%d", &expo);
    int r = potencia( base, expo);
    printf("Resultado: %d\n", r);
    printf("Base: %d; Exponente: %d; Resultado: %d\n\n", base, expo, potencia(base,expo));}
}
