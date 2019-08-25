/*Este programa fue creado por Alvin Adrian Del Rosario Brito(2009-5076).
 Creado el 7-Junio-2012. Ultima modificacion 9-Junio-2012.
 El programa consiste en una calculadora que realiza operaciones sencillas (+ - * /).
 PUCMM SD -ISC206 -T -003  SAMUEL A. LUCIANO L.*/
int main(){
    int v1, v2, respuesta;
    char c;
    printf("Introduzca la operacion que desea realizar(+ - * /)(luego presione enter): ");
    scanf("%c", &c);
    printf("\nIntroduzca un valor(luego presione enter): ");
    scanf("%d", &v1);
    printf("\nIntroduzca otro valor(luego presione enter): ");
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
