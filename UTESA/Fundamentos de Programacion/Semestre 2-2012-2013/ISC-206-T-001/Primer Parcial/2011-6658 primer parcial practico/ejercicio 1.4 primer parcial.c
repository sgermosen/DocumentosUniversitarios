void formato (int dia, int mes, int year);
void formato (int dia, int mes, int year)
{
int fecha;

do
{

printf("Como desea visualizar la fecha? \n");
printf("Si prefiere DD/MM/YYYY presione 1. \n");
printf("Si prefiere MM/DD/YYYY presione 2. \n");
scanf("%d", &fecha);

if (fecha != 1 && fecha != 2)
{
    printf("Las opciones son solo 1 o 2, intente nuevamente. ");
}

}while (fecha != 1 && fecha != 2);

if(fecha == 1)
{
    printf("La fecha es: %d/%d/%d\n", dia, mes, year);
}
else if (fecha == 2)
{
    printf("La fecha es: %d/%d/%d\n", mes, dia, year);
}
}

int main(){
 int dia, mes, year;

 printf("Ingrese el dia(dd): ");
 scanf("%d", &dia);
 printf("Ingrese el mes (mm):  ");
 scanf("%d", &mes);
 printf("Ingrese el a%co (yyyy): ", 164);
 scanf("%d", &year);

 formato(dia, mes, year);
}
