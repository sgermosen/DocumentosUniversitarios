int main(){
    int nota;
    printf("Introduzca una nota: ");
    scanf("%d", &nota);
    if(nota >= 100){
           printf("Alta\n"); 
    } else {
           printf("Baja\n");       
    }
    system("pause");    
}
