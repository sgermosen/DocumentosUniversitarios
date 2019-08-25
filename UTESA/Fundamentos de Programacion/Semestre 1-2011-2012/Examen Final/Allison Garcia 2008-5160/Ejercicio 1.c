int main(){
    int num;
    printf("Introducir un numero entre el 1 al 500\n");
    scanf("%d",&num);
    int resultado = num % 3;
    printf("Resultado = %d\n", resultado);
    if(resultado==0) {
        printf("El numero es divisible\n");
    } 
    system("pause");
}
