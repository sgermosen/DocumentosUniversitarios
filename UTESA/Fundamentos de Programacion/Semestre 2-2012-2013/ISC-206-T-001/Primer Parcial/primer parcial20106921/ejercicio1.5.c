int main(){
    int num, divisor=1,count=0;
    printf("introduzca un numero: ");
    scanf("%d", &num);
    while(divisor<=num){
    if((num%divisor)==0) count+=divisor;
    divisor++;
    }
              if(count>(num*2)) {

              printf("El numero dado es abundante\n");
              if((count-num*2)==1)printf("El numero dado es casi perfecto\n");
              else printf("El numero dado no es casi perfecto\n");
              }
            else printf("El numero dado no es abundante\n");
            system("pause");
            return 0;

}

