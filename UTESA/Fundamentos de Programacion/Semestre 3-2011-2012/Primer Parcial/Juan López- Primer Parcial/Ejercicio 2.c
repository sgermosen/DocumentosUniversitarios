int main(){
    float sumatoria=0, nota;
    int i;
for (i = 0;i < 20;i += 1) { // Se limitó la cantidad de notas a 20
       printf("Introduzca la nota: ");
       scanf("%f",&nota);
        sumatoria += nota; }
        if (nota < 0 && nota > 100) // Esta validación está demás, no era requerida.
        printf("Error ");
        else
        printf("promedio = %.2f\n", sumatoria/20);
    system("pause");
}
