int main(){
    int calificacion;
    printf("Introduzca la puntuacion final:\n\n");
    scanf("%d", &calificacion);
    
    if(calificacion >= 90){
                    printf("Su Calificacion ha sido A.\t\1\n\n");
  }  else if(calificacion >= 80){
                    printf("Su calificacion ha sido B.\n\n");                     
  } else if(calificacion >= 70){
                    printf("Su calificacion ha sido C.\n\n");
  }  else if(calificacion >= 60){
                    printf("Su calificacion ha sido D.\n\n");
  }  else {
                    printf("Su calificacion ha sido F.\n\n");
}                 
    system("pause");    
}    
