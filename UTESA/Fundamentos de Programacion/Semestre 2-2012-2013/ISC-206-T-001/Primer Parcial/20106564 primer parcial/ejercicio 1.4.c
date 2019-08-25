int potencia(int b, int e){
int r=1, i;

    for (i=0;i<e;i++){
        r=r*b;
    }
return r;
}
int main (){
    int b, e, i, r;

    printf ("Programa para hacer potencias\n\n\n");

    for (i=0; i<3; i++){
        printf("Introduce la base de la potencia: ");
        scanf("%d", &b);
        printf("\nIntroduce el exponente de la potencia: ");
        scanf("%d", &e);

        printf("\n\n");
        r=potencia (b, e);

        printf("%d^%d = %d\n\n",b,e,r);
}}
