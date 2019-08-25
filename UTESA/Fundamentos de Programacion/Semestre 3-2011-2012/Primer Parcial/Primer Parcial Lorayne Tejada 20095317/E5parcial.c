int main(){

    int n, filas, columnas;

    printf("Inserte un Numero: ");
    scanf("%d",&n);

    for(filas=1;filas<=n;filas++){

        for(columnas=1;columnas<=n-filas;columnas++){

            printf(" ");}

        for(columnas=1;columnas<=2*filas-1;columnas++){
    printf("*"); }

        printf("\n");

    }



 }


