int main(){
    float calificacion;
    printf("Introduzca una calificacion\n");
    scanf("%f", &calificacion);
    if(calificacion >= 90){
               printf("Su calificacion obtenida es A\n");
        } else if(calificacion >= 80){
               printf("Su calificacion obtenida es B\n");
        } else if(calificacion >= 70){
               printf("Su calificacion obtenida es C\n");
        } else if(calificacion >= 60){
               printf("Su calificacion obtenida es D\n");
        } else {
               printf("Su calificacion obtenida es F\n");  
        }                
    system("pause");   
}
