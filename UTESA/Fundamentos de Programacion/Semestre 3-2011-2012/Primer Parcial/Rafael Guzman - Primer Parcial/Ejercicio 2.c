int main (){
    int numero1;
    int numero2;
    int numero3;
    printf("Introduzca el primer numero ");
    scanf("%d", &numero1);
    printf("Introduzca el segundo numero ");
    scanf("%d", &numero2);
    printf("Introduzca el tercer numero ");
    scanf("%d", &numero3);
    if (numero1 < numero2 && numero2 < numero3){
    printf("Los numeros estan en orden numerico");
    } else printf("Los numeros no estan en orden numerico");
}
