/*Rafael Guzman 2009-5956*/

int main () {
    int calificacion;
    printf ("Introduzca un numero del 1 al 12: ");
    scanf ("%d", &calificacion);
    if (calificacion == 12) {
            printf ("Este numero corresponde al mes de Diciembre que tiene 31 dias\n");
        } else if (calificacion == 11) {
            printf ("Este numero corresponde al mes de Noviembre que tiene 30 dias\n");
        } else if (calificacion == 10) {
            printf ("Este numero corresponde al mes de Octubre que tiene 31 dias\n");
        } else if (calificacion == 9) {
            printf ("Este numero corresponde al mes de Septiembre que tiene 30 dias\n");
        } else if (calificacion == 8) {
            printf ("Este numero corresponde al mes de Agosto que tiene 31 dias\n");
        } else if (calificacion == 7) {
            printf ("Este numero corresponde al mes de Julio que tiene 31 dias\n");
        } else if (calificacion == 6) {
            printf ("Este numero corresponde al mes de Junio que tiene 30 dias\n");
        } else if (calificacion == 5) {
            printf ("Este numero corresponde al mes de Mayo que tiene 31 dias\n");
        } else if (calificacion == 4) {
            printf ("Este numero corresponde al mes de Abril que tiene 30 dias\n");
        } else if (calificacion == 3) {
            printf ("Este numero corresponde al mes de Marzo que tiene 31 dias\n");
        } else if (calificacion == 2) {
            printf ("Este numero corresponde al mes de Febrero y tiene 28 dias\n");
        } else if (calificacion == 1) {
            printf ("Este numero corresponde al mes de Enero y tiene 31 dias\n");
        } else {
            printf ("El numero seleccionado no esta dentro de los rangos establecidos\n");
        }

}
