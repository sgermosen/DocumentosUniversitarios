int main(){
    int i, contador, primo, n;

    printf ("Introduzca el limite: ");
    scanf ("%d", &n);

    printf ("\n\nlos numeros primos hasta %d son: ", n);
    for (i=1; i<=n; i++){
        primo=1;
    for (contador = 2; contador<= i-1; contador ++){
        if (i%contador == 0){
            primo = 0;
            break;
        }
    }

    if (primo == 1)
        printf (" %d,", i);
    }
printf ("\n\n", n);
system("PAUSE");
}
