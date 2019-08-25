int main(){
    int a, b, opcion =1;
    printf("Introduzca un entero: ");
    scanf("%d\n", &a);
    printf("Introduzca otro entero: ");
    scanf("%d\n", &b);
    printf("Introduzca un operador: ");
    scanf("%c\n", &opcion);
    switch(opcion){
        case 42:
            printf("%d", a*b);
            break;
        case 43:
            printf("%d", a + b);
            break;

        case 45:
            printf("%d", a - b);
            break;

        case 47:
            printf("%d", a/b);
            break;


        default:
            printf("Opcion invalida!");
    }
}
