int main(){
    int a,conteo=0;

    printf("ingrese el numero de lineas: ");
    scanf ("%d",&a);
do {
    conteo++;
    if (conteo ==1){
    printf ("*\n");}
    else if (conteo==2){

    printf ("**\n");}
    else if (conteo ==3){
    printf ("***\n");
    }
    else if (conteo ==4){
    printf ("****\n");}
    else if (conteo ==5){
    printf ("*****\n");}
    else if (conteo >5){
    printf ("*****");}
}

while (conteo <a);


}
