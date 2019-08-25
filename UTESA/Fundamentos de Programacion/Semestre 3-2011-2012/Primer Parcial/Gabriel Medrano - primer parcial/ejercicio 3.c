int main (){
int numero1, numero2, numero3 ;
    printf("Introducir un valor: ");
    scanf("%d", &numero1);
    printf("Introducir un valor: ");
    scanf("%d", &numero2);
    printf("Introducir un valor: ");
    scanf("%d", &numero3);
if (numero1 > numero2){ //Esta condición funciona incorrectamente pues solo determina si el numero1 es mayor que el numero2 sin saber si el numero1 es mayor que el numero3
printf("numero 1");
} else if (numero1 > numero3){
printf("numero 1");
} else if (numero2 >numero1){
printf("numero2");
} else if (numero2 >numero3){
printf("numero2");
} else if (numero3 > numero1){
printf("numero3");
} else if (numero3 > numero2){
printf("numero3");
}
}

