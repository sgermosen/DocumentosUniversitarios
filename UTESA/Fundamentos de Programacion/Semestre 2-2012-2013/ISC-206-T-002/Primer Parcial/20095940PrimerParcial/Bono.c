/*Bono*/

int main() {

    int x =0, i=1;
    printf("Ingrese un Numero:");
    scanf("%d", &x);
    int acum=0;
    while(i <= x)
    {
        if(x % i > ++ 0 )
            acum+=i;
        i++;
    }
    if(acum == x)
        printf("\nEs Abundante");
    else
        printf("\nNo es Abundante");

}
