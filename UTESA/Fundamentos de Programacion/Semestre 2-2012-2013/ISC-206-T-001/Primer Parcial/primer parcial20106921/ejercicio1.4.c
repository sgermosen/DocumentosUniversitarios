int Imprecion_Fechas(int opcion)
{
   int m,d,y;
    switch (opcion)
    {
        case 1:
        {
            printf("Dijite la fecha dd/mm/yyyy: ");
            scanf("%d/%d/%d",&d,&m,&y);
            printf("\nFECHA: %d/%d/%d",d,m,y);
        }
        break;
        case 2:
        {
            printf("Dijite la fecha mm/dd/yyyy: ");
            scanf("%d/%d/%d",&m,&d,&y);
            printf("\nFECHA: %d/%d/%d",m,d,y);
        }
        break;
        default:
            printf("\nOpcion invalida");
        break;
    }
}
int main()
{
    int opcion;
    int i;
    for(i=0; i<3; i++)
    {
        printf("\nElija formato de las Fechas.\n");
        printf("\n1) dd/mm/yyyy\n2) mm/dd/yyyy\n\n");
        scanf("%d",&opcion);
        Imprecion_Fechas(opcion);
    }
    return 0;
}
