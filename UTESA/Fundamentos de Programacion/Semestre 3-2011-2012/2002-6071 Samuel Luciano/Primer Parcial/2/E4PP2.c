int main(){
    int cantidad;
    printf("Introduzca el monto: ");
    scanf("%d", &cantidad);
    if(cantidad >= 2000){
        printf("%d billetes de 2000.\n", cantidad/2000);
        cantidad = cantidad - ((cantidad/2000) * 2000);
    }
    if(cantidad >= 1000){
        printf("%d billetes de 2000.\n", cantidad/1000);
        cantidad = cantidad - ((cantidad/1000) * 1000);
    }
    if(cantidad >= 500){
        printf("%d billetes de 2000.\n", cantidad/500);
        cantidad = cantidad - ((cantidad/500) * 500);
    }
    if(cantidad >= 200){
        printf("%d billetes de 2000.\n", cantidad/200);
        cantidad = cantidad - ((cantidad/200) * 200);
    }
    if(cantidad >= 100){
        printf("%d billetes de 2000.\n", cantidad/100);
        cantidad = cantidad - ((cantidad/100) * 100);
    }
    if(cantidad >= 50){
        printf("%d billetes de 2000.\n", cantidad/50);
        cantidad = cantidad - ((cantidad/50) * 50);
    }
    if(cantidad >= 20){
        printf("%d billetes de 2000.\n", cantidad/20);
        cantidad = cantidad - ((cantidad/20) * 20);
    }
    if(cantidad >= 25){
        printf("%d monedas de 2000.\n", cantidad/25);
        cantidad = cantidad - ((cantidad/25) * 25);
    }
    if(cantidad >= 10){
        printf("%d monedas de 2000.\n", cantidad/10);
        cantidad = cantidad - ((cantidad/10) * 10);
    }
    if(cantidad >= 5){
        printf("%d monedas de 2000.\n", cantidad/5);
        cantidad = cantidad - ((cantidad/5) * 5);
    }
    if(cantidad >= 1){
        printf("%d monedas de 2000.\n", cantidad/1);
        cantidad = cantidad - ((cantidad/1) * 1);
    }
}
