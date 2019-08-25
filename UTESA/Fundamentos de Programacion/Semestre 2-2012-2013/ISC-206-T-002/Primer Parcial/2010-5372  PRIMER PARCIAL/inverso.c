int main ()
{
long numero, inverso=0, residuo;
printf ("ingrese un numero: ");
scanf ("%1d", &numero);
residuo = numero;
while (residuo>0)
{
inverso = inverso * 10 + residuo % 10;
residuo /= 10;
}
printf ("valor del numero inverso: %1d, inverso");
}
