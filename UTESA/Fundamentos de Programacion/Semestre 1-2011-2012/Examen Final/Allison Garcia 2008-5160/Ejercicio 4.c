int main(){
    float calificacion;
    printf("Introducir una calificacion: \n");
    scanf("%f", &calificacion);
    if(calificacion >= 90) {
        printf("La calificacion es A.\n");
        } else if(calificacion >= 80){
               printf("La calificacion es B.\n");
        } else if(calificacion >= 70){
               printf("La calificacion es C.\n");
        } else if(calificacion >= 60){
               printf("La calificacion es D.\n");
        } else {
               printf("La calificacion es F.\n");
               }
    system("pause");
}
