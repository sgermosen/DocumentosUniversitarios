int main() {
int nota;
printf("introduzca la nota:");
scanf("%d", &nota);
if (nota >=90 && nota<=100)
    printf("Su calificacion es A\n");
if (nota >=80 && nota<=89)
    printf("Su calificacion es B\n");
if (nota >=70 && nota<=79)
    printf("Su calificacion es C\n");
if (nota >=60 && nota<=69)
    printf("Su calificacion es D\n");
if (nota <= 59)
    printf("Su calificacion es F, ha reprobado el examen.\n");

}
