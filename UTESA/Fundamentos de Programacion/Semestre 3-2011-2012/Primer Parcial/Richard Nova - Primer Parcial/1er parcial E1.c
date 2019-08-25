int main(){
    char c;
    printf("introdusca un caracter:");
    scanf("%c", &c);
    switch(c){
        case '1':
            printf("enero 31 dias\n");
             break;
        case '2':
            printf("febrero 28 dias\n");
             break;
        case '3':
            printf("marzo 31 dias\n");
             break;
        case '4':
            printf("abril 30 dias\n,");
             break;
        case '5':
            printf("mayo 31 dias\n");
             break;
        case '6':
            printf("junio 30 dias\n");
             break;
        case '7':
            printf("julio 31 dias\n");
             break;
        case '8':
            printf("agosto 31 dias\n");
             break;
        case '9':
            printf("septiembre 30 dias\n");
             break;
        case '10':
            printf("octubre31\n");
             break;
        case '11':
            printf("noviembre30\n");
             break;
        case '12':
            printf("diciembre31\n");
            break;
        default:
            printf("caracter invalido!\n");
    }
}

