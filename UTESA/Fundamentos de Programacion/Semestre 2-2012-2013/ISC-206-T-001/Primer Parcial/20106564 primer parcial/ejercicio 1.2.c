int main (){
    int n, r[10], i=0, j;

    printf ("introduzca un numero: ");
    scanf ("%d", &n);

    do {
        r[i]=n%10;
        n=n/10;
        i++;
    }
    while (n!=0);

    printf ("\nresultado: ");
    for (j=0); j<i; j++
}
