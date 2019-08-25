//Billetes y monedas

int main(){
    int dinero, cantidad;
    printf("Introduzca cantidad: ");
    scanf("%d", &cantidad);

    if (cantidad >= 2000){
    printf("Numero de papeletas de 2000: %d\n", cantidad/2000);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);
    }

    if (cantidad >= 1000){
    printf("Numero de papeletas de 1000: %d\n", cantidad/1000);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);
    }

      if (cantidad >= 500){
    printf("Numero de papeletas de 500: %d\n", cantidad/500);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

  if (cantidad >= 200){
    printf("Numero de papeletas de 200: %d\n", cantidad/200);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

  if (cantidad >= 100){
    printf("Numero de papeletas de 100: %d\n", cantidad/100);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

  if (cantidad >= 50){
    printf("Numero de papeletas de 50: %d\n", cantidad/50);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

  if (cantidad >= 20){
    printf("Numero de papeletas de 20: %d\n", cantidad/20);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

if (cantidad >= 25){
    printf("Numero de monedas de 25: %d\n", cantidad/25);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

if (cantidad >= 10){
    printf("Numero de monedas de 10: %d\n", cantidad/10);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

if (cantidad >= 5){
    printf("Numero de monedas de 5: %d\n", cantidad/5);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}

if (cantidad >= 1){
    printf("Numero de monedas de 1: %d\n", cantidad/1);
    cantidad = dinero - cantidad;
    scanf("%d", &dinero);}


    }
