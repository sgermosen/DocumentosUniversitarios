int main(){
    int n, j, primo = 1;
    for(n = 2;n <= 6071;n++){
        for(j = n - 1;j >= 2;j--){
            if(n % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo = 1){
            printf("%d\n", n);
        }
    }
}
