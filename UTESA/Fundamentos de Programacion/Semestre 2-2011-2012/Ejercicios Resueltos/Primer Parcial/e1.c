int main(){
    int numero, mayor = 0, i = 1;
    do{
        printf("Introduzca un numero: ");
        scanf("%d", &numero);
        if(numero > mayor)
                  mayor = numero;
        i++;
    } while(i <= 3);
    printf("\nEl numero mayor es: %d\n", mayor);
    system("pause");   
}
