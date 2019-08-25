int potencia(int base, int exponente);
int potencia(int base, int exponente) {
    int r = 1, i;
    for(i=1;i <= exponente;i++){
        r =r * base;
    }
    return r;
}
int main() {
    int base, expo;
    int r = potencia(base,expo);
    printf("Base: %d;Exponente: %d;Resultado: %d\n", 2, 3, potencia(2,3));
    printf("Base: %d;Exponente: %d;Resultado: %d\n", 10, 5, potencia(10,5));
    printf("Base: %d;Exponente: %d;Resultado: %d\n", 20, 2, potencia(20,2));
}
