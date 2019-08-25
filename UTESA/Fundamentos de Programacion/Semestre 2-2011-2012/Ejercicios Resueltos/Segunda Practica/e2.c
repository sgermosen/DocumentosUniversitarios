int main(){
    int mes;
    printf("Introduzca un numero de mes: ");
    scanf("%d", &mes);
    switch(mes){
                case 1:
                     printf("Enero : 31 días\n");            
                     break;
                case 2:
                     printf("Febrero : 28 días\n");            
                     break;
                case 3:
                     printf("Marzo : 31 días\n");            
                     break;
                case 4:
                     printf("Abril : 30 días\n");            
                     break;
                case 5:
                     printf("Mayo : 31 días\n");            
                     break;
                case 6:
                     printf("Junio : 30 días\n");            
                     break;
                case 7:
                     printf("Julio : 31 días\n");            
                     break;
                case 8:
                     printf("Agosto : 31 días\n");            
                     break;
                case 9:
                     printf("Septiembre : 30 días\n");            
                     break;
                case 10:
                     printf("Octubre : 31 días\n");            
                     break;
                case 11:
                     printf("Noviembre : 30 días\n");            
                     break;
                case 12:
                     printf("Diciembre : 31 días\n");            
                     break;
                default:
                     printf("Mes invalido\n");            
                     break;
    }
    system("pause");    
}
