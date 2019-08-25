int main(){
    int i, j = 0, n, k;
    for(i = 1;i <= 5;i++){
          for(k = 5 - i;k >= 1;k--)
                printf(" ");
          for(n = 1;n <= i + j;n++)
                printf("*");
          printf("\n");
          j++;
    }
    j = 3;
    for(i = 4;i >= 1;i--){
          for(k = 5 - i;k >= 1;k--)
                printf(" ");
          for(n = 1;n <= i + j;n++)
                printf("*");
          printf("\n");
          j--;
    }
    system("pause");    
}
