#include <stdio.h>

int main (){
    int num;
    printf("Ingrese el numero: ");
    scanf ("%d", &num);

    while (num != 0) {
        printf("%d",num%10);
        num = num/10;

    }
 return 0;

}
