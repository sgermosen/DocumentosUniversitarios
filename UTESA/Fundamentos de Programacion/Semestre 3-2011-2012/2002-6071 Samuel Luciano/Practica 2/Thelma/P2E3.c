int main(){
    int year;
    printf("Introduzca un anio: ");
    scanf("%d", &year);
    if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)){
            printf("El anio %d es bisiesto.\n", year);
    } else {
           printf("El anio %d no es bisiesto.\n", year);
    }
    system("pause");
}
