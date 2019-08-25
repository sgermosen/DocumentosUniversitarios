int main(){
    int a, b, c, d;
    printf("Introduzca el primer digito:");
    scanf("%d", &a);
    printf("Introduzca el segundo digito:");
    scanf("%d", &b);
    printf("Introduzca el tercer digito:");
    scanf("%d", &c);
    printf("Introduzca el cuarto digito:");
    scanf("%d", &d);
    printf("Numero original: %d%d%d%d\n", a, b, c, d);
    if(d >= 5)
        c++;
    if(c >= 5)
        b++;
    printf("Numero redondeado: %d%d%d%d\n", a, b, 0, 0);
}
