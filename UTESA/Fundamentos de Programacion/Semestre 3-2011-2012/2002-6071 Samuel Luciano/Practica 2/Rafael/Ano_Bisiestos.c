/*Rafael Guzman 2009-5956*/

int main () {
    int anio;
        printf("Introduzca el anio en cuestion: ");
        scanf("%d", &anio);
        if(anio%4 == 0)
        {
        if(anio%100 == 0)
        {
        if(anio%400 == 0)
        {
        printf("BISIESTO\n");
        }
        else
        printf("NO BISIESTO\n");
        }
        else
        printf("NO BISIESTO\n");
        }
        else
        printf("NO BISIESTO\n");
}
