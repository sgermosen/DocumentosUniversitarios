int main(){
long numero;
int digito;

printf ("Ingrese un numero:");
scanf("%ld", &numero);

printf("Numero invertido:");

while(numero > 0){
digito = numero %10;
numero/=10;
printf("%d", digito);
}

}
