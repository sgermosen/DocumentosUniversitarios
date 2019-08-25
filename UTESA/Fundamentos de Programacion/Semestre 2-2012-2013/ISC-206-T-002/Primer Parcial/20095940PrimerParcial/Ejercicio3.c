
/* Examen Parcial
Ejercicio 3*/

 int main() {
    int m;
printf("INGRESE UN NUMERO LIMITE: ");
scanf("%d", &m);

       int i , primo = 1, j ;
       for(i = 1;i <= m; i++) {
       for (j = i - 1;j > 1; j --) {
       if (i % j ==0){
       primo = 0;
       break;
        }
       }
       if (primo == 1){
       printf("%d Es un numero Primo. \n", i);
       }
       else  {
       printf("%d No es Primo. \n", i);

       }
       }

       primo = 1;


}

