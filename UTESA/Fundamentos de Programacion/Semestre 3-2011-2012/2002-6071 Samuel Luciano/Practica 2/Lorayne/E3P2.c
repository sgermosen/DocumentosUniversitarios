/* Bisiestos o no Bisiestos.
Autora: Lorayne Tejada
20095317*/


int main(){
    int month1;
    float month2;  

    printf("Digite el ano que desee, para determinar si es bisiesto o no: ", 164);0
     scanf("%d",&month1);
       if (month1<=100){  
       if ((month1%4)==0)
    printf("\nBisiesto\n\n",164);        
        else 
    printf("\nNo es Bisiesto\n\n");
}
    if (month1>100)          
{         
          if (((month1%4)==0) && ((month1%100)==0) && ((month1%400)==0)) 
          printf("Bisiesto\n\n",164);
        else 
    printf("NO es Bisiesto\n\n");
}
  system("pause");}
