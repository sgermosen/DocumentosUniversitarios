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
        printf("Dia: ");
        scanf("%d",&dia);
        printf("Mes: ");
        scanf("%d",&mes);
        printf("A%co: ", 164);
        scanf("%d",&ano);
        printf("\nElija el formato de las Fechas.\n");
        printf("\n1) dia/mes/anio\n2) mes/dia/anio\n\n");
        scanf("%d",&eleccion);
        Fecha(eleccion, dia, mes, ano);
    }
    return 0;
}

