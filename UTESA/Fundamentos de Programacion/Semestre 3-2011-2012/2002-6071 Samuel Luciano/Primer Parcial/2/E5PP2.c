int main(){
    int i, j, numero;
    printf("Introduzca un numero: ");
    scanf("%d", &numero);
    for(i = numero;i >= 1;i--){
        for(j = 1;j <= i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
