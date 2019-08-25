int main(){
    int v1, v2, respuesta;
    char c;
    printf("Introduzca la operacion que desea realizar(+ - * /): ");
    scanf("%c", &c);
    printf("\nIntroduzca un valor: ");
    scanf("%d", &v1);
    printf("\nIntroduzca otro valor: ");
    scanf("%d", &v2);
    switch(c) {
        case '+':
            respuesta = v1 + v2;
            printf("\n%d + %d = %d\n\n", v1, v2, respuesta);
            break;
        case '-':
            respuesta = v1 - v2;
            printf("\n%d - %d = %d\n\n", v1, v2, respuesta);
            break;
        case '*':
            respuesta = v1 * v2;
            printf("\n%d * %d = %d\n\n", v1, v2, respuesta);
            break;
        case '/':
            if(v2 == 0){
                 printf("\nERROR: La operacion realizada no es correcta, la division entre 0 no existe!\n\n");
                 break;
            } else{
                 respuesta = v1 / v2;
                 printf("\n%d / %d = %d\n\n", v1, v2, respuesta);
                 break;
            }
        
        default: 
            printf("\nEl caracter que se introdujo no es valido, vuelva a intenteralo!\n\n");
    
    }
    system("pause");
}
