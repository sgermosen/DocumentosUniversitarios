int main (){
int num;
printf("introdusca un numero: ");
scanf("%d", &num);
do{
printf("%d", num % 10);
num = num / 10;
}while(num >=1);
printf("/n");
}
