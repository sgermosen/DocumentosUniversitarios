int main(){ // Este programa le hace falta la lógica para contar la cantidad de notas.
    int calificacion;
    printf("Introduzca su calificacion: ");
    scanf("%d", &calificacion);
    if (calificacion > 100) {
        printf("Calificacion Invalida\n");
    } if (calificacion <= 37) {
        printf("Calificacion Invalida\n");
    }else if (calificacion >= 90){
        printf("A\n");
    }else if (calificacion >= 80){
        printf("B\n");
    }else if (calificacion >= 70){
        printf("C\n");
    }else if (calificacion >= 60){
        printf("D\n");
    }else {
        printf("F\n");
}
}
