int main(){
    int calificacion,contador1=0,contador2=0,contador3=0,contador4=0;

    do {
    printf("introduzca una calificacion:");
    scanf("%d",&calificacion);

    if (calificacion>=90 && calificacion<=100){
        contador1++;
    } else if (calificacion<=89 && calificacion>=80){
        contador2++;

    }else if (calificacion<=79 && calificacion>=70){
        contador3++;

    }else if (calificacion<=69 && calificacion>=60){
        contador4++;

    }

    }

    while (calificacion>=37);
    printf("%d A\n",contador1);
    printf("%d B\n",contador2);
    printf("%d C\n",contador3);
    printf("%d D\n",contador4);






}
