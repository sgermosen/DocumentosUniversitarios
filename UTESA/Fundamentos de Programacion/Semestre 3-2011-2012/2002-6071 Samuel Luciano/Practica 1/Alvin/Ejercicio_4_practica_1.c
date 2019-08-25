/*Programa creado por Alvin Del Rosario(2009-5076)
Fecha de creacion 29-5-2012;Fecha de Entrega (2-6-2012)
SD -ISC206 -T -003; SAMUEL A. LUCIANO L.*/
int main(){
    printf("Operaciones Matematicas\n");
    int valor1=5, valor2=3, valor3=6, valor4=2;
    int valor5=8, valor6=9;
    printf("\n(5*(3+6)/2)-(((8+5-6)*9/3)%%2)= %d\n", (valor1*(valor2+valor3)/valor4)-(((valor5+valor1-valor3)*valor6/valor2)%valor4));
    int numero1=3, numero2=10, numero3=8;
    printf("(3 <= 10) >= ((3*8) - 10)= %d\n", (numero1 <= numero2) >= ((numero1 * numero3) - numero2));
    printf("(((99 >12) && (56 <=10)) || (89 !=0) && ((5==5) >=1))= %d\n\n", (((99 >12) && (56 <=10)) || (89 !=0) && ((5==5) >=1)));
    printf("\n\nNOTA IMPORTANTE:\n");
    printf("Cierto=1\tFalso=0\n\n");
    system("pause");
    }
