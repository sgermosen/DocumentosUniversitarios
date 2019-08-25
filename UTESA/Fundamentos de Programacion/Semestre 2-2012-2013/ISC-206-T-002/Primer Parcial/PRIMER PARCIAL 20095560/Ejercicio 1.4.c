#include <stdio.h>

int potencia(int base, int exponente) {
	int i;
	int r = base;
	for (i = 1; i < exponente; i++) {
		r = r * base;
	}

	return r;
}

int main() {
	int b;
	int e;
	int i;
	int r;

	for (i = 0; i < 3; i++) {
		printf("Introduzca la base: ");
		scanf("%d", &b);

		printf("Introduzca el exponente: ");
		scanf("%d", &e);

		r = potencia(b, e);
		printf("%d\n", r);
	}

	return 0;
}
