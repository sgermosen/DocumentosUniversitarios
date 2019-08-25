int par(int n1);
int par(int n1){
    if(n1 % 2 == 0){
            return 1;
    } else {
            return 0;       
    }    
}
int main(){
    int n1 = 10;
    printf("Par? (0 = No; 1 = Si): %d\n\n", par(n1));
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Par? (0 = No; 1 = Si): %d\n\n", par(n1));
    printf("Introduzca un numero: ");
    scanf("%d", &n1);
    printf("Par? (0 = No; 1 = Si): %d\n\n", par(n1));
    system("pause");
}
