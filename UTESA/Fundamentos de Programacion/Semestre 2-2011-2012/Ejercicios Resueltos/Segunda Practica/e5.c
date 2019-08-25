int main(){
    int a, b, c, d;
    printf("Introduzca cuatro (4) digitos para formar un numero: \n");    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Numero original: %d%d%d%d\n", a, b, c, d);
    if(d >= 5)
         c++;
    if(c >= 5)
         b++;
    printf("Numero redondeado: %d%d%d%d\n", a, b, c, d);
    system("pause");
}
