int Fecha(int eleccion,int dia, int mes, int ano)
{
    switch (eleccion)
    {
        case 1:
        {
            printf("\nEsta Es Su Fecha: %d/%d/%d\n\n", dia, mes, ano);
        }
        break;
        case 2:
        {
            printf("\nEsta Es Su Fecha: %d/%d/%d\n\n", mes, dia, ano);
        }
        break;
        default:
            printf("\nEleccion invalida\n\n");
        break;
    }
}
int main()
{
    int eleccion, i, dia, mes, ano;
    for(i=0; i<3; i++)
    {
        printf("Que Dia: ");
        scanf("%d",&dia);
        printf("De Que Mes: ");
        scanf("%d",&mes);
        printf("De Que Anio?: ");
        scanf("%d",&ano);
        printf("\nElija La Presentacion de las Fechas.\n");
        printf("\n1) dia/mes/anio\n2) mes/dia/anio\n\n");
        scanf("%d",&eleccion);
        Fecha(eleccion, dia, mes, ano);
    }
    return 0;
}

