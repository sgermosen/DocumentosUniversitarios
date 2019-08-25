int main(){ // Este programa no cumple con lo requerido.
    int nota;
    printf("Introduzca la nota: ");
    scanf("%d", &nota);

    if(nota < 100 &&  nota >90 ){
          printf("A\n");
    }
    if(nota < 90 &&  nota >80 ){
          printf("B\n");}

    if(nota < 80 &&  nota >70 ){
          printf("C\n");
    }
    if(nota < 70 &&  nota >60 ){
          printf("D\n");
    }
    if(nota < 60 &&  nota >50 ){
          printf("F.\n");
    }
    if (nota < 37  ){
          printf("ERROR \n");
    }
}

