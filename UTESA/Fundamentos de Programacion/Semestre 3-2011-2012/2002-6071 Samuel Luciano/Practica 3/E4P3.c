int main(){
    int numero, i, j, primo = 1;
    printf("Introduzca el limite: ");
    scanf("%d", &numero);
    for(i = 2;i <= numero;i++){
        for(j = i - 1;j >= 2;j--){
            if(i % j == 0){
               primo = 0;
               break;
            }
        }
        if(primo == 1){
            printf("%d es primo.\n", i);
        } /*else {
            printf("%d no es primo.\n", i);
        }*/
        primo = 1;
    }
}
