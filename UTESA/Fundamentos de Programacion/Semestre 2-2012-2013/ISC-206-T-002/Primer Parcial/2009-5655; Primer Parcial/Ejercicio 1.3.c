int main(){
    int b;
    printf("Introduzca un numero: ");
    scanf("%d", &b);
    int i, primo = 1, j;
    for(i = 1;i <= b;i++){
        for(j = i - 1;j > 1;j--){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d es primo.\n", i);
        } else {
            printf("%d no es primo.\n", i);
        }
        primo = 1;
    }
}
