int pow (int numero, int potencia){
    int total = 1, i;
    for (i=1; i<=potencia; i++){
        total*= numero;
    }
    return total;
}
int main()
{
    int numero, potencia ;
    int i;
    for (i=0 ; i<3; i++){
        printf("\n\nnumero y potencia");
        scanf("%d,%d",&numero,&potencia);

        printf("\n\n%d^%d=%d",numero,potencia,pow(numero,potencia));
    }
}
