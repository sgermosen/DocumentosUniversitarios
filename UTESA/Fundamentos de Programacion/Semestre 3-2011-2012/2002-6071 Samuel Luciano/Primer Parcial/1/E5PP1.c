int main(){
    int i, j, numero;
    printf("Introduzca un numero: ");
    scanf("%d", &numero);
    for(i = 1;i <= numero;i++){
        for(j = i;j >= 1;j--){
            printf("*");
        }
        printf("\n");
    }
}
