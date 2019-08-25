int main()
{
    float A;
    float B;
    char operacion;
    printf("Calculadora\n");
    printf("Digite el primer valor:\n ");
    scanf("%f",&A);
    printf("Digite el segundo valor: \n");
    scanf("%f",&B);
    printf("Digite la operacion: \n");
    scanf("%s",&operacion);

    switch(operacion)
    {case '+':
            printf("\n=%.3f\n",A+B);
            break;
        case '-':
            printf("\n=%.3f\n",A-B);
            break;
        case '*':
            printf("\n=%.3f\n",A*B);
            break;
        case '/':
            if(B==0)
            {printf("No es posible la divicion por cero :\n'( \n"); break;}
            printf("\n=%.3f\n",A/B);
            break;
        default:
            printf("Error al introducir los datos\n");}
}
