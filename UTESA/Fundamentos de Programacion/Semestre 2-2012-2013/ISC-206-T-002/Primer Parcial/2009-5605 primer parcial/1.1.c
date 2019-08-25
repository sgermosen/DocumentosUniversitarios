int main(){
int nota;

printf("escriba la nota: ");
scanf("%d", &nota);

if(nota >= 90 && nota <= 100){
printf("A\n");
}
else if (nota >= 80 && nota <= 89){
printf("B\n");
}
else if (nota >= 70 && nota <= 79){
printf("C\n");
}
else if (nota >= 60 &&  nota <= 69){
printf("D\n");
}
else if (nota <= 59){
printf("F\n");
}

return 0;
}
