int main(){
    int calificacion, a = 0, b = 0, c = 0, d = 0, f = 0;
    do{
        printf("Introduzca una calificacion: ");
        scanf("%d", &calificacion);
        if(calificacion <= 37){
            break;
        }
        if(calificacion >= 90){
            a++;
        } else if(calificacion >= 80){
            b++;
        } else if(calificacion >= 70){
            c++;
        } else if(calificacion >= 60){
            d++;
        } else {
            f++;
        }
    }while(calificacion > 37);
    printf("Cantidad de A: %d\n", a);
    printf("Cantidad de B: %d\n", b);
    printf("Cantidad de C: %d\n", c);
    printf("Cantidad de D: %d\n", d);
    printf("Cantidad de F: %d\n", f);
}
