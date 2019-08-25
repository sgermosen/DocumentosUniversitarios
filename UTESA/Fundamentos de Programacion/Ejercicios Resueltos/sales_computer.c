float CalcularComision(int preciolaptop);
float CalcularSubtotal(float preciolaptop, int preciobulto);
float CalcularITBIS(int preciolaptop);

float CalcularComision(int preciolaptop){
      return (preciolaptop * 0.05);      
}
float CalcularSubtotal(float preciolaptop, int preciobulto){
      return (preciolaptop + preciobulto);      
}
float CalcularITBIS(int preciolaptop){
      return (preciolaptop * 0.16);      
}

int main(){
    int idcliente = 0, laptop = 0, deseabulto = 0, bulto = 0, preciobulto = 0, vendedor = 0, aplicadescuento = 0;
    float preciolaptop = 0, movil = 0, telefono = 0, comision = 0, subtotal = 0, itbis = 0, descuento = 0;
    printf("Introduzca su ID de Cliente: ");
    scanf("%d", &idcliente);
    printf("Introduzca su Numero de Telefono: ");
    scanf("%f", &telefono);
    printf("Introduzca su Numero de Celular: ");
    scanf("%f", &movil);
    printf("\n\n");
    printf("Elija la laptop que desea: \n\n");
    printf("1. Acer Aspire One (RD$ 13,247.00)\n");
    printf("2. Dell Inspiron 1525 (RD$ 25,500.00)\n");
    printf("3. Toshiba Satellite D650 (RD$ 18,642.00)\n");
    printf("4. Dell XPS (RD$ 45,300.00\n");
    printf("\nOpción elegida: ");
    scanf("%d", &laptop);
    printf("\n\nDesea adquirir un bulto para su laptop? (1 = Si; 0 = No) ");
    scanf("%d", &deseabulto);
    switch(laptop){
          case 1:
             preciolaptop = 13247;  
             break;
          case 2:
             preciolaptop = 25500;
             break;
          case 3:
             preciolaptop = 18642;
             break;
          case 4:
             preciolaptop = 45300;  
             break;
          default:
             printf("La opción elegida no es valida. El programa finalizara su ejecucion.\n");
             system("pause");
             exit(0);
             break;
    }
    if(deseabulto == 1){
         printf("\n\nElija el bulto que desea: \n\n");
         printf("1. Bulto de Nylon Sencillo (RD$ 640.00)\n");
         printf("2. Bulto de Nylon Ejecutivo (RD$ 850.00)\n");
         printf("3. Bulto en Leather (RD$ 1,425.00)\n");
         printf("\nOpcion elegida: ");
         scanf("%d", &bulto);
         switch(bulto){
                case 1:
                   preciobulto = 640;  
                   break;  
                case 2:
                   preciobulto = 850;  
                   break;  
                case 3:
                   preciobulto = 1425;  
                   break;  
                default:
                   printf("\n\nLa opcion elegida no es valida. Se asume que no se eligio ningun bulto.\n\n");
                   deseabulto = 0;     
                   break;              
         }
    }
    if(preciolaptop > 20000){
           aplicadescuento = 1;
           descuento = (preciolaptop * 0.05);
           preciolaptop = preciolaptop - descuento;                
    }
    printf("\n\nIntroduzca el Codigo de Vendedor: ");
    scanf("%d", &vendedor);
    comision = CalcularComision(preciolaptop);
    itbis = CalcularITBIS(preciolaptop);
    subtotal = CalcularSubtotal(preciolaptop, preciobulto);
    printf("\n\n----- Informacion del Cliente -------\n\n");
    printf("ID del Cliente: %d\n", idcliente);
    printf("Telefono: %.0f\n", telefono);
    printf("Celular: %.0f", movil);
    printf("\n\n----- Informacion del Vendedor -------\n\n");
    printf("Vendedor: %d\n", vendedor);
    printf("Comision: %.2f", comision);
    printf("\n\n----- Informacion de la Laptop -------\n\n");
    printf("Laptop: %d", laptop);
    if(deseabulto == 1)
          printf("\nBulto: %d", bulto);
    printf("\n\n----- Factura -------\n\n");
    printf("Precio Laptop: %.2f", preciolaptop);
    if(aplicadescuento == 1)
       printf("\nDescuento: %.2f", descuento);
    if(deseabulto == 1)
       printf("\nPrecio Bulto: %d", preciobulto);
    printf("\nSubtotal: %.2f\n", subtotal);
    printf("ITBIS: %.2f\n", itbis);
    printf("Total: %.2f\n\n", (subtotal + itbis));
    system("pause");
}
