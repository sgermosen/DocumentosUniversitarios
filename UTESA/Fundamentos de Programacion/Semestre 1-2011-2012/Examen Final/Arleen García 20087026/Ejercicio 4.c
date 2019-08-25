int main (){
    float CALIFICACION;
    printf ("Introduzca una nota:\n ");
    scanf ("%f", &CALIFICACION);
    if (CALIFICACION >=90){
                     printf ("La calificación obtenida es A\n");
                     } else if (CALIFICACION >=80){
                       printf ("La calificación obtenida es B\n");
                         } else if (CALIFICACION >=70){    
                                printf ("La calificación obtenida es C\n");
                                } else if (CALIFICACION >=60){    
                                printf ("La calificación obtenida es D\n");
                                } else if (CALIFICACION >=50){    
                                printf ("La calificación obtenida es F\n");
                                }
                                system ("pause");
}
