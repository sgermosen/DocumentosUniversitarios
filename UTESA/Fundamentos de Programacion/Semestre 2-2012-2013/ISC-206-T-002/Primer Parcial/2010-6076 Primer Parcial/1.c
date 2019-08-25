int main()
{
    int cal;
    printf("Introduzca una calificacion: \n");
    scanf("%d", &cal);

    if(cal <= 100 && cal >= 0){

    if (cal <=100 && cal >=90){
        printf("La calificacion es: A");
    }

    if (cal <=89 && cal >=80){
        printf("La calificacion es: B");
    }
    if (cal <=79 && cal >=70){
        printf("La calificacion es: C");
    }
    if (cal <=69 && cal >=60){
        printf("La calificacion es: D");
    }
    if (cal <=59 && cal >=0){
        printf("La calificacion es: F");
    }
   }
   else{
        printf("La calificacion esta fuera del rango");
   }

}
