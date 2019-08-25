int main(){
    char c;
    printf("Introduzca un caracter: ");
    scanf("%c", &c);
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vocal\n");
            break;
        default:
            printf("Caracter invalido!\n");
    }
}
