int main(){
    int year;
    for(year = 2100;year <= 2200;year++){
        if(year % 4 == 0 && year % 100 != 0){
                printf("%d : es bisiesto.\n", year);
        } else if((year % 4 == 0 && year % 100 == 0) && year % 400 == 0) {
                printf("%d : es bisiesto.\n", year);
        } else {
                printf("%d : no es bisiesto.\n", year);
        }
    }
    system("pause");    
}
