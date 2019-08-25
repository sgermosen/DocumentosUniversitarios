int main(){
    int num1, num2, num3;
printf("Escriba primer numero: ");
scanf("%d", &num1);
printf("\nEscriba segundo numero: ");
scanf("%d", &num2);
printf("\nEscriba tercer numero: ");
scanf("%d", &num3);
if ((num1 > num2) && (num1 > num3)){
          printf("\n\nEstan en orden numerico descendente. \n\n");
} else {
          printf("\n\nNO estan en orden numerico descendente.\n\n ");
}

}
