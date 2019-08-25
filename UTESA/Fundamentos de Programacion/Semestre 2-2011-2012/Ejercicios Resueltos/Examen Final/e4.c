int main(){
    int i = 1, n, primo = 0;
    for(i;i <= 200;i++){
        for(n = i - 1;n > 1;n--){
                if(i % n == 0){
                      primo = 1;
                }        
        }
        if(primo == 1)
                 printf("%d no es primo.\n", i);
        else                 
                 printf("%d es primo.\n", i);
        primo = 0;
    }
    system("pause");
}
