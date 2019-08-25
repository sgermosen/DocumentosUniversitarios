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
    if (numero1 > numero2 && numero1 > numero3){
    printf ("El primer numero introducido es el mayor de los tres");
    } else ("El numero no es el mayor");
     if (numero2 > numero1 && numero2 > numero3){
    printf ("El segundo numero introducido es el mayor de los tres");
    } else ("El numero no es el mayor");
     if (numero3 > numero1 && numero3 > numero2){
    printf ("El tercer numero introducido es el mayor de los tres");
    } else ("El numero no es el mayor");
}

