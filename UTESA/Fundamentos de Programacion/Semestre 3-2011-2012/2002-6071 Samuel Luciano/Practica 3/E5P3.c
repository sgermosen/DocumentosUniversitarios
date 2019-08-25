int main(){
    int num;
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    do{
        printf("%d", num % 10);
        num = num / 10;
    }while(num > 0);
    printf("\n");
}
