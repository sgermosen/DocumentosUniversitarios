//Determinar el mayor de 3 numeros

int main (){

int numero1, numero2, numero3;

printf("Inserte valor: ");
scanf("%d", &numero1);

printf("Inserte valor: ");
scanf("%d", &numero2);


printf("Inserte valor: ");
scanf("%d", &numero3);

if(numero1 > numero2 && numero2 > numero3){
    printf("El primer valor es mayor: ");
   }
   if(numero2 > numero1 && numero2 > numero3){
    printf("El segundo valor es mayor: ");
   }
   if(numero3 > numero1 && numero3 > numero2){
    printf("El tercer valor es mayor: ");
   }
}


