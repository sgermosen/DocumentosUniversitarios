int main(){
    int cantidad, i;
    printf("Introduzca el monto: ");    
    scanf("%d", &cantidad);
    if(cantidad >= 2000){
                i = cantidad/2000;
                printf("%d papeleta(s) de 2000\n", i);            
                cantidad -= (i * 2000);
    }
    if(cantidad >= 1000){
                i = cantidad/1000;
                printf("%d papeleta(s) de 1000\n", i);            
                cantidad -= (i * 1000);
    }
    if(cantidad >= 500){
                i = cantidad/500;
                printf("%d papeleta(s) de 500\n", i);            
                cantidad -= (i * 500);
    }
    if(cantidad >= 200){
                i = cantidad/200;
                printf("%d papeleta(s) de 200\n", i);            
                cantidad -= (i * 200);
    }
    if(cantidad >= 100){
                i = cantidad/100;
                printf("%d papeleta(s) de 100\n", i);            
                cantidad -= (i * 100);
    }
    if(cantidad >= 50){
                i = cantidad/50;
                printf("%d papeleta(s) de 50\n", i);            
                cantidad -= (i * 50);
    }
    if(cantidad >= 20){
                i = cantidad/20;
                printf("%d papeleta(s) de 20\n", i);            
                cantidad -= (i * 20);
    }
    if(cantidad >= 25){
                i = cantidad/25;
                printf("%d moneda(s) de 25\n", i);            
                cantidad -= (i * 25);
    }
    if(cantidad >= 10){
                i = cantidad/10;
                printf("%d moneda(s) de 10\n", i);            
                cantidad -= (i * 10);
    }
    if(cantidad >= 5){
                i = cantidad/5;
                printf("%d moneda(s) de 5\n", i);            
                cantidad -= (i * 5);
    }
    if(cantidad >= 1){
                i = cantidad/1;
                printf("%d moneda(s) de 1\n", i);            
                cantidad -= (i * 1);
    }
    system("pause");
}
