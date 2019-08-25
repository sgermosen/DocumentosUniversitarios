int main (){
    int num1, num2, num3;
    printf("Introduzca el primer numero ");
    scanf("%d", &num1);
    printf("Introduzca el segundo numero ");
    scanf("%d", &num2);
    printf("Introduzca el tercer numero ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3){
    printf ("El primer numero introducido es el mayor de todos");
    }
     if (num2 > num1 && num2 > num3){
    printf ("El segundo numero introducido es el mayor de todos");
    }
     if (num3 > num1 && num3 > num2){
    printf ("El Tercer numero introducido es el mayor de todos");
    }
}




