int main(){
    int num1, num2;
    printf("Introduzca dos numero cualesquieran\n");
    scanf("%d", &num1);
    printf("Introduzca el siguiente numero\n");
    scanf("%d", &num2);
    printf("Siendo No = 0 y Si = 1:\n");
    printf("El primero es mayor que el segundo:\t %d\n", num1 > num2);
    printf("El primero es menor que el segundo:\t %d\n", num1 < num2);
    printf("El primero es mayor o igual que el segundo:\t%d\n", num1 >= num2);
    printf("El primero es menor que el segundo:\t%d\n", num1 <= num2);
    printf("El primero es diferente que el segundo:\t%d\n", num1 != num2);
    printf("El primero es igual que el segundo:\t%d\n", num1 == num2);
    system("pause");    
}    
