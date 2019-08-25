int main(){
int numero, sumatoria = 0, i = 0;
printf("introduzca el limite:");
scanf("%d", & numero);
for(i =100; i <= numero;i++){ // Este for es innecesario e ilógico.
    do{
    printf("introduzca una nota:");
    scanf("%d", &numero);
    if(numero >= 0 && numero<=100){ // Esta validación esta demas, no fue requerida en el mandato.
    sumatoria = sumatoria + numero;
    i++;
    }else{
        printf("media= %f\n", (float)sumatoria/i);
    }
    }while (i>=1);
    printf("media= %f\n", (float)sumatoria/i);
}
}

