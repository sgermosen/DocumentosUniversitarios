int main ()
{
float numero, mayor, menor, promedio, suma=0;
int i, n, posicion_menor, posicion_mayor;
printf ("ingrese el numero de elementos (n): ");
scanf ("%d", &n);
getchar();
for(i=1; i<=n; i++)
{
    printf ("ingrese el valor %d: ", i);
    scanf ("%f", &numero);
    if (i==1 || numero<menor)
    {
        menor = numero;
        posicion_menor = i;
    }
    if (i==1 || numero>mayor)
    {
        mayor = numero;
        posicion_mayor = i;
    }
    suma += numero;
}
promedio = suma / n;
printf("promedio      : %g\n", promedio);
}
