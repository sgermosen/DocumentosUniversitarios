/*programa #2
autor:cristian rodriguez
matricula:2010-5462
fecha:28/5/2012*/

int main(){
    int number1,number2,number3;
    
    printf("ingrese un numero:");
    scanf("%d",&number1);
    printf("ingrese un segundo numero:");
    scanf("%d",&number2);
    printf("ingrese un ultimo numero:");
    scanf("%d",&number3);
    printf("la suma de todos es :%d\n",number1+number2+number3);
    printf("la resta de todos es :%d\n",number1-number2-number3);
    printf("el producto de todos es :%d\n",number1*number2*number3);
    printf("la division de todos es :%d\n",(number1/number2)/number3);
    printf("el residuo de los primeros dos numeros es:%d\n",number1%number2);
    system("pause");
    }
