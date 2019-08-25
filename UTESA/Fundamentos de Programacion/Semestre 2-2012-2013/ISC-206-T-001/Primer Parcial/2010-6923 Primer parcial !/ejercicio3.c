int main(){
    int numero,limite, primo = 1, i;
    printf("Introduzca un limite:");
    scanf("%d", &limite);
    for(numero = 1;numero <= limite;numero++){
        for(i = numero - 1;i > 1;i--){
            if(numero % i == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d es primo.\n", numero);
        } else {
            printf("%d no es primo.\n", numero);
        }
        primo = 1;
    }
}
