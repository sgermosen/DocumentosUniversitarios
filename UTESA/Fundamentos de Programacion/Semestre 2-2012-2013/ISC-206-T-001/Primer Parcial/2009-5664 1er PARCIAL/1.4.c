int main()
{

    int dia;
    int mes;
    int ano;

    int p = 0; //usted dijo que si le explicamos para que funciona puede hacerlo valido
                // iniciando con el int p = 0, lo utilizaremos para el do while
                //Lo que hace el do while es que todo lo que este entre
                //  "do {   }(while...);" (entre los { } )
                // lo va a repetir hasta que llege al limite
                //en este caso el limite seria cuando p < 3, osea lo repetira tres veces
                //Se llega a p=3 porque antes de repetir todo devuelta
                //le estamos sumando 1 a p  (osea, p++)


    do {
    printf("Introduce el Dia: ");
    scanf("%d", &dia);
    printf("Introduce el Mes: ");
    scanf("%d", &mes);
    printf("Introduce el Ano: ");
    scanf("%d", &ano);

    fecha(dia, mes, ano);

    p++;
    }while (p < 3);


}

void fecha(int dd, int mm, int yy)
{
    printf("Fecha dd/mm/yy: %d/%d/%d", dd, mm, yy);
    printf("\n");
    printf("Fecha mm/dd/yy: %d/%d/%d", mm, dd, yy);
    printf("\n");
}


