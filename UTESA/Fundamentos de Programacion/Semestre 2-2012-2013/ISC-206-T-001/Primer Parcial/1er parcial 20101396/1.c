int main(){
 float a, b, c, d, e, f, g, h, i, j ;
    printf("Introducir la primera calificacion:");
    scanf("%f", &a);
    if (a > 100 || a < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la segunda calificacion:");
    scanf("%f", &b);
    if (b > 100 || b < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la tercera calificacion:");
    scanf("%f", &c);
    if (c > 100 || c < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la cuarta calificacion:");
    scanf("%f", &d);
    if (d > 100 || d < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la quinta calificacion:");
    scanf("%f", &e);
    if (e > 100 || e < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la sexta calificacion:");
    scanf("%f", &f);
    if (f > 100 || f < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la septima calificacion:");
    scanf("%f", &g);
    if (g > 100 || g < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la octava calificacion:");
    scanf("%f", &h);
    if (h > 100 || h < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la novena calificacion:");
    scanf("%f", &i);
    if (i > 100 || i < 1)
        printf("Numero invalido, tiene q ser del 1-100");
    printf(" Introducir la decima calificacion:");
    scanf("%f", &j);
    if (j > 100 || j
        < 1)
        printf("Numero invalido, tiene q ser del 1-100");

        printf(" La calificacion promedio sera:%.2lf ", (a + b + c + d + e + f + g + h + i + j)/10);


}
