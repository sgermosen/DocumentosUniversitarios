int main(){
    int _num1, _num2, sig;
    printf ("introduzca un numero:");
    scanf("%d", &_num1);
    printf ("introduzca un numero:");
    scanf("%d", &_num2);

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n\n");
    printf("4. /\n\n");
    printf ("introduzca un signo:");
    scanf("%d", &sig);

    switch (sig){
         case 1:
               printf("sumatoria: %d\n", _num1 + _num2);
               break;
         case 2:
               printf("resta: %f\n", (float)_num1 - _num2);
               break;
         case 3:
               printf("multiplicacion: %d\n", _num1 * _num2);
               break;

         case 4:
               printf("Division: %d\n", _num1 / _num2);
               break;

}
}

