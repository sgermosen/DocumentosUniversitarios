#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    float cal = 0.0, promedio = 0.0, v_aux = 0.0;
    while(i<10)
    {

       printf("\n Ingrese la calificacion %d: ", i + 1);
       scanf("%f",&cal);
       if((cal > 0) && (cal <=100))
       {
          v_aux += cal;
          i++;
       }
       else
       {

           printf("\n Ingrese una calificacion entre 1 y 100 \n");
       }


    }

    promedio = v_aux/10;
    printf("\n El promedio es:  %2.2f ", promedio);

  system("PAUSE");
  return 0;
}

