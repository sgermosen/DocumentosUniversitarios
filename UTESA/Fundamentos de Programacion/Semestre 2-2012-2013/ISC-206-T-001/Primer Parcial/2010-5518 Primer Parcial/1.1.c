int main(){
    int cal;
    printf("Introduzca calificacion:");
    scanf("%d", &cal);
        if(cal >= 90){
            printf("A\n");
            printf("Excelente!\n");
            }
        if(cal >= 80 && cal <= 89){
            printf("B\n");
            printf("Bien!\n");
            }
        if(cal >= 70 && cal <= 79){
            printf("C\n");
            printf("Maso!\n");
            }
        if(cal >= 60 && cal <= 69){
            printf("D\n");
            printf("Dichoso!\n");
            }
        if(cal >= 0 && cal <= 59){
            printf("F\n");
            printf("Ta'Quemao!\n");
            }
        system("pause");
}
