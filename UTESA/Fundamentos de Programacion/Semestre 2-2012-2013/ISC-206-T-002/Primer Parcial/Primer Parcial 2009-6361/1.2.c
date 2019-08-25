int main(){
    long numero;
    int digito;

    printf("Introduzca un numero: ");
    scanf("%ld", &numero);

    printf("El inverso del numero es: ");

    while(numero > 0 ){

    digito = numero % 10;
    numero /= 10;
    printf("%d", digito);
    }
}
