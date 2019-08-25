int main(){
    int n,f,c;
        printf("tamaño de la piramide: ");
        scanf("%d",&n);

    for(f=1;f<=n;f++){
    for(c=1;c<=n-f;c++){
        printf(" ");
    }
    for(c=1;c<=2*f-1;c++){
        printf("*");
    }
        printf("\n");
    }
}
