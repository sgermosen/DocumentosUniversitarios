/*Programa creado por Alvin Del Rosario(2009-5076)
Fecha de creacion 29-5-2012;Fecha de Entrega (2-6-2012)
SD -ISC206 -T -003; SAMUEL A. LUCIANO L.*/
int main(){
    int valor1, valor2;
    printf("Introduzca un numero(luego presione enter)=");
    scanf("%d", &valor1);
    printf("Introduzca otro numero(luego presione enter)=");
    scanf("%d", &valor2);
    printf("\n\nValor1 < Valor2= %d\n", valor1 < valor2);
    printf("Valor1 <= Valor2= %d\n", valor1 <= valor2);
    printf("Valor1 > Valor2= %d\n", valor1 > valor2);
    printf("Valor1 >= Valor2= %d\n", valor1 >= valor2);
    printf("Valor1 = Valor2= %d\n", valor1 == valor2);
    printf("Valor1 diferente del Valor2= %d\n", valor1 != valor2);
    printf("\n\nNOTA IMPORTANTE:\n");
    printf("Cierto=1\tFalso=0\n\n");
    system("pause");
    }
