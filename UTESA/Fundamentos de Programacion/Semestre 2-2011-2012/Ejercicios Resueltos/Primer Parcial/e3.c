int main(){
    int n1, i;
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("\n");
    for(n1;n1 >= 1;n1--){
              for(i = 1;i <= n1;i++){
                    printf("%d  ", i);      
              }
              printf("\n");
    }
    printf("\n");
    system("pause");    
}
