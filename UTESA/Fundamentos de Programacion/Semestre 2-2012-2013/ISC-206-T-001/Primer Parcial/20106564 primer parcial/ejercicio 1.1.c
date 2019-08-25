int main (){
    int n[10], i;
    float r=0;

    for (i=0; i<10; i++){
        printf ("Ingrese la calificacion #%d: ", i+1);
        scanf ("%d", &n[i]);

        if ((n[i]>100)||(n[i]<0)){
            printf ("el valor introducido no es valido\n");
            i--;
        }
        else r=r+n[i];
    }

    printf ("el promedio es: %0.2f", r/10);

    system ("pause");
}
