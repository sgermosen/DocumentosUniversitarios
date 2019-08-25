
*/Escribir un programa que calcule la potencia de tres (3) pares de números
diferentes. Debe crear una función para el cálculo de la potencia */

int potencia(double a, double b)
{
    return pow(a,b);
    }

    int main()
    {
    double j,y,e,p,s,i;
    printf("Introduzca primer numero: ");
           scanf ("%d", &j);
    printf("Introduzca segundo numero: ");
           scanf("%d", &y);
    printf("Introduzca tercer numero: ");
           scanf("%d", &e);
    printf("Introduzca cuarto numero: ");
           scanf("%d", &p);
    printf("Introduzca quinto numero: ");
           scanf("%d", &s);
    printf("Introduzca sexto numero: ");
           scanf("%d", &i);

    printf("El primer resultado es: %d", potencia(j,y));
    printf("\nEl segundo resultado es: %d", potencia(e,p));
    printf("\nEl tercer resultado es: %d", potencia(s,i));

    return 0;
}
