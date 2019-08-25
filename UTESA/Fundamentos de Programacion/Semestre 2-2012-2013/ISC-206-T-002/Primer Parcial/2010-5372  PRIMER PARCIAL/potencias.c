int potencia(int base, int exponente);
int potencia(int base, int exponente){
    int h=1, e;
    for(e=1; e<=exponente; e++){
        h=h*base;
    }
    return h;
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

