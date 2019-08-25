int main() {
    int calificaciones;
    scanf("%d", &calificaciones);
    if (calificaciones >= 90){
       printf("La calificacion obtenida es una A\n");
    }else if (calificaciones >= 80){
        printf("La calificacion obtenida es una B\n");
    }else if (calificaciones >= 70){
        printf("La calificacion obtenida es una C\n");
    }else if (calificaciones >= 60){
        printf("La calificacion obtenida es una D\n");
    }else { 
        printf("La calificaciones obtenida es una F\n");
        }
system("PAUSE");   
}
