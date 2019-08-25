int factorial(int n1);
int factorial(int n1){
    int aux = 1;
    for(n1;n1 > 1;n1--){
              aux *= n1;         
    }
    return aux;
}
int main(){
    int n1;
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Resultado del calculo del factorial: %d\n\n", factorial(n1));
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Resultado del calculo del factorial: %d\n\n", factorial(n1));
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Resultado del calculo del factorial: %d\n\n", factorial(n1));
    system("pause");
}
