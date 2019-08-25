
int main (){
    int nota;
    printf ("Ingrese la Nota del Estudiante: ");
    scanf ("%d", &nota);
    if(nota >= 90 && nota <= 100)
        printf ("A\n");
    if(nota >= 80 && nota <= 89)
        printf ("B\n");
    if(nota >= 70 && nota <= 79)
        printf ("C\n");
    if(nota >= 60&& nota <= 69)
        printf ("D\n");
    if(nota >= 0 && nota <= 59)
        printf ("F\n");

    printf ("\n");
    system ("pause");
}
