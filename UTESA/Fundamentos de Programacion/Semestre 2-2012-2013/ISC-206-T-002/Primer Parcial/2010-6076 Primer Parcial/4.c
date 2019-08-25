
int Formatofecha(int opcion, int dia, int mes, int anio)
{
    switch(opcion)
    {
        case 1:
      {
          printf("%.2d/%.2d/%.4d\n", dia, mes, anio);
      }
      break;
        case 2:
      {
      printf("%.2d/%.2d/%.4d\n", mes, dia, anio);
      }
      break;
    }

}

int main()
{
    int i, x, y, w, z;
    for(i = 0; i < 3; i++){
    printf("Introduzca el dia: ");
    scanf("%d", &x);
    printf("Introduzca el mes: ");
    scanf("%d", &y);
    printf("Introduzca el a%co: ", 164);
    scanf("%d", &w);
    printf("Elija formato:\n1)dd/mm/yyyy\n2)mm/dd/yyyy\n\n");
    scanf("%d", &z);

    Formatofecha(z, x, y, w);
    }
}
