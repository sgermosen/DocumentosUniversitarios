/*Rafael Guzman 2009-5956*/

int main(){
    int a, b, c, d;
    printf("Introduzca 4 numeros: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Cantidad formada: %d%d%d%d\n", a, b, c, d);
    if(d >= 5)
         c++;
    if(c >= 5)
         b++;
    printf("Cantidad redondeada: %d%d%d%d\n", a, b, c, d);
}
