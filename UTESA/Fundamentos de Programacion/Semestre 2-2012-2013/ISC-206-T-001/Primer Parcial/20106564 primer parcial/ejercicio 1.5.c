int main (){
    int num, divisor=1, count=0;
    printf("Introduzca un numero:\n");
    scanf("%d", &num);
    while (divisor<=num){

        if((num%divisor)==0) count+=divisor;
        divisor++;
    }
    if (count>(num*2)){
        printf("El numero dado es abundante\n");
        if((count-num*2)==1)
        printf("El numero dado es quasiperfecto\n*");
        else printf("El numero dado no es quasiperfecto\n");
    }
    else printf("El numero dado no es abundante\n");
    system("PAUSE");
}
