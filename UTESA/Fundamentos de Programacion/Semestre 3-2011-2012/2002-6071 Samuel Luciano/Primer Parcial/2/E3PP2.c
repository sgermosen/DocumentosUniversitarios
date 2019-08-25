int main(){
    int n1, n2, n3, mayor;
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Introduzca un numero: ");
    scanf("%d", &n2);
    printf("Introduzca un numero: ");
    scanf("%d", &n3);
    mayor = n3;
    if(n1 > mayor){
        mayor = n2;
    }
    if(n2 > mayor){
        mayor = n3;
    }
    printf("El valor mayor es: %d\n", mayor);
}
