int main(){
    int num;
    printf("Introduzca un numero:");
    scanf("%d", &num);
    printf("Numero original: %d\n", num);
    printf("Numero invertido: ");
    printf("%d", num % 10);
    num = num / 10;
    printf("%d", num % 10);
    num = num / 10;
    printf("%d", num % 10);
    num = num / 10;
    printf("%d\n", num);
}
