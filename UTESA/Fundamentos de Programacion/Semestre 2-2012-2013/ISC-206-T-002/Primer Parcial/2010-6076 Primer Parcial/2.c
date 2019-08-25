int main()
{
    int mes;
    printf("Introduzca un numero de mes: \n");
    scanf("%d", &mes);

    if(mes <= 12 && mes >=1){

    if (mes >=1 && mes <2){
        printf("Enero:\n31 dias");
    }
    if (mes >= 2 && mes < 3){
        printf("Febrero:\n28 dias");
    }
    if (mes >= 3 && mes < 4){
        printf("Marzo:\n31 dias");
    }
    if (mes >= 4 && mes < 5){
        printf("Abril:\n30 dias");
    }
    if (mes >= 5 && mes < 6){
        printf("Mayo:\n31 dias");
    }

    if (mes >= 6 && mes < 7){
        printf("Junio:\n30 dias");
    }
    if (mes >= 7 && mes < 8){
        printf("Julio:\n31 dias");
    }
    if (mes >= 8 && mes < 9){
        printf("Agosto:\n31 dias");
    }
    if (mes >= 9 && mes < 10){
        printf("Septiembre:\n30 dias");
    }
    if (mes >= 10 && mes < 11){
        printf("Octubre:\n31 dias");
    }
    if (mes >= 11 && mes < 12){
        printf("Noviembre:\n30 dias");
    }

    if (mes >= 12 && mes < 13){
        printf("Diciembre:\n31 dias");
    }

   }
   else{
        printf("Ese numero no es un mes");
   }

}

