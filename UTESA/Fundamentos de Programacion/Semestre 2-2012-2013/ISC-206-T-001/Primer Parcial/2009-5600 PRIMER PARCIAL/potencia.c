int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int a=1, b;
    for(b=1; b<=exponente; b++){
        a=a*base;
    }
    return a;
}
int main (){
    int x,y,z;
        x= potencia (2,5);
        printf("%d\n", x);
        y= potencia (3,8);
        printf("%d\n", y);
        z= potencia (4,6);
        printf("%d\n",z);

}

