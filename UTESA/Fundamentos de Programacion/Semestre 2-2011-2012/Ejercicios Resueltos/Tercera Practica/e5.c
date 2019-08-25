int main(){
    int n1, aux;
    printf("Introduzca un numero:");    
    scanf("%d", &n1);
    printf("Los digitos invertidos forman el numero: ");
    do{
       printf("%d", n1 % 10);
       n1 /= 10;
    }while(n1 > 0);
    printf("\n");
    system("pause");
}
