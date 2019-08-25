int main(){
    int calificacion;
    printf("introduzca su calificacion: ");
    scanf("%d", &calificacion);
    if (calificacion > 100){
        printf("calificacion invalida!\n");
    } else if(calificacion>=90 ){
        printf("A\n");
    } else if (calificacion>= 80){
        printf("B\n");
    } else if (calificacion>=70){
        printf("C\n");
    } else if (calificacion>=60){
        printf("D\n");
    } else if (calificacion>=50){
        printf("e\n");
    } else if (calificacion>=40){
        printf("f\n");
    } else if(calificacion>=37){
        printf("g\n");
    } else if (calificacion<37){
        printf("acabar programa!\n");
    } else {

    }
}
