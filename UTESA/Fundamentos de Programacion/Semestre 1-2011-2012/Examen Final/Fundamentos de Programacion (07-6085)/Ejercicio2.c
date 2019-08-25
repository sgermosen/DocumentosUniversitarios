int main(){
    float num1, num2, num3, suma, resta, producto, division;
    printf("Introduzca 3 valores para calcular su suma, resta y multiplicacion:\n");
    scanf("%f", &num1);
    printf("Introduzca el segundo valor:\n");
    scanf("%f", &num2);
    printf("Introduzca el tercer valor:\n");
    scanf("%f", &num3);
    suma = num1 + num2 + num3;
    producto = num1 * num2 * num3;
    resta = num1 - num2 - num3;
    division = num1 / num2 / num3;
    printf("La suma de los valores es %.1f\n", suma);
    printf("La resta de los valores, en su respectivo orden, es %.1f\n", resta);
    printf("El producto de los valores es %.1f\n", producto);
    printf("El cociente de los valores, en su respectivo orden, es %.2f\n\n", division);
    system("pause");    
}
