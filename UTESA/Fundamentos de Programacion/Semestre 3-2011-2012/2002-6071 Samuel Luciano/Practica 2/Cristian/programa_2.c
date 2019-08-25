int main()
{
    int num1,num2;
    char op;
    
    printf("ingrese la operacion:");
    scanf ("%c",&op);
    printf("ingrese un numero:");
    scanf ("%d",&num1);
    printf("ingrese otro numero:");
    scanf ("%d",&num2);
    
    switch (op){
           case '+':
                printf("\n%d\n",num1+num2);
                break;
           case '-':
                printf("\n%d\n",num1-num2);
                break;     
           case '*':
                printf("\n%d\n",num1*num2);
                break;  
           case '/':
                printf("\n%d\n",num1/num2);
                break;        
           default:
                   printf("\noperacion invalida\n") ;
                   }
          if (num1/num2==0){ 
                        printf ("\nERROR\n"); 
                        } 
                        
       system("PAUSE");
    
}
