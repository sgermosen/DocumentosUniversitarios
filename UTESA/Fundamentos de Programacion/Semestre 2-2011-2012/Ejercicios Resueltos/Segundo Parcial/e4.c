int EsPrimo(int numero);
int EsPrimo(int numero){
	int i;
	for(i = numero - 1;i > 1;i--){
			if(numero % i == 0){
				  return 1;
			}        
	}
	return 0;
}
int main(){
    int i = 1;
    for(i;i <= 200;i++){
        if(EsPrimo(i) == 1)
                 printf("%d no es primo.\n", i);
        else                 
                 printf("%d es primo.\n", i);
    }
    system("pause");
}
