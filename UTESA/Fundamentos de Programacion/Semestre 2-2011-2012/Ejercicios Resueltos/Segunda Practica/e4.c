int main(){
    int year;
    printf("Introduzca un a%co:", 164);
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0){
            printf("Es bisiesto.\n");
    } else if((year % 4 == 0 && year % 100 == 0) && year % 400 == 0) {
            printf("Es bisiesto.");
    } else {
            printf("No es bisiesto.");
    }
    system("pause");    
}
