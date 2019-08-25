int main(){
    float salario, nsalario, aumento = 0;
    printf("Introduzca su salario: ");
    scanf("%f", &salario);
    if(salario <= 9000){
               aumento = 0.2 * salario;
    } else if(salario <= 15000){
               aumento = 0.1 * salario;
    } else if(salario <= 20000){
               aumento = 0.05 * salario;
    }
    nsalario = salario + aumento;
    printf("\nSu salario: RD$ %.2f\n", salario);
    printf("Su aumento: RD$ %.2f\n", aumento);
    printf("Su nuevo salario: RD$ %.2f\n\n", nsalario);
    system("pause");    
}
