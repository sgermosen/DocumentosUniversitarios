int main(){
    int numero, i, j, primo = 1;

    for(i =9; i <= 5076; i++){
            for(j = i -1; j >= 2; j--){
            if( i % j == 0){
                primo = 0;
                break;
               }
            }
            if (primo == 1){
              printf("%d Es primo. \n ", i);
            }
            primo = 1;
    }
}
