int Fechas(int opcion,int d, int m, int y)
{
    switch (opcion)
    {
        case 1:
        {
            printf("\nFecha: %d/%d/%d\n\n",d,m,y);
        }
        break;
        case 2:
        {
            printf("\nFecha: %d/%d/%d\n\n",m,d,y);
        }
        break;
        default:
            printf("\nOpcion invalida!\n\n");
        break;
    }
}
int main()
{
    int opcion,i,d,m,y;
    for(i=0; i<3; i++)
    {
        printf("Introduzca el dia:");
        scanf("%d",&d);
        printf("Introduzca el mes:");
        scanf("%d",&m);
        printf("Introduzca el año:");
        scanf("%d",&y);
        printf("\nElija formato de la Fecha\n");
        printf("1) dd/mm/yyyy\n2) mm/dd/yyyy\n");
        scanf("%d",&opcion);
        Fechas(opcion,d,m,y);
    }
    return 0;
}


