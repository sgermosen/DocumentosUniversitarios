
void imprimir_fecha(int dia, int mes, int ano, int format) {
	if (format == 1) {
		printf("%02d/%02d/%d\n", dia, mes, ano);
	} else if (format == 2) {
		printf("%02d/%02d/%d\n", mes, dia, ano);
	}
}

int main() {
	int d, m, a, f;
	printf("Dia: ");
	scanf("%d", &d);
	printf("Mes: ");
	scanf("%d", &m);
	printf("Ano: ");
	scanf("%d", &a);
	printf("Formato: \n1. dd/mm/yyyy\n2. mm/dd/yyyy\n");
	scanf("%d", &f);

	imprimir_fecha(d, m, a, f);



	return 0;
}
