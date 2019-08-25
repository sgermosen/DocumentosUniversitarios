int main(){
    int n1 = 1, i = 1, j, divisores = 0;
    do{
        j = n1 - 1;
        for(j;j >= 1;j--){
                if(n1 % j == 0){
                      divisores = divisores + j;      
                }
        }
        if(divisores == n1){
                printf("Numero perfecto %d: %d\n", i, n1);     
                i++;             
        }
        divisores = 0;
        n1++;
    } while(i <= 3);
    system("pause");    
}
