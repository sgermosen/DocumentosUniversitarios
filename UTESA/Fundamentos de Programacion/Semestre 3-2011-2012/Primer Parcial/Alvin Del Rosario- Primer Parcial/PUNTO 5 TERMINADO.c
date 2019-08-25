int main(){


int n,fila,col;
 printf("Indique un valor: ");
 scanf("%d",&n);

for(fila=1;fila<=n;fila++){



for(col=1;col<=n-fila;col++){


 printf(" ");

 }
for(col=1;col<=fila;col++){


 printf("*");

 }

 printf("\n");

}

}

