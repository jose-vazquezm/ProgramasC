#include <stdio.h>

int power(int m, int n); /* declaración */

float promedio3(int a, int b, int c);

main()
{
	int i;
	for (i = 0; i < 10; i++) {
		printf("%i elevado a la %i potencia es igual a: %i\n", i, 2, power(i, 2));
	}
	
	printf("\n9 elevado a la 9 potencia es: %i", power(9, 9));
	
	float valor;
	valor = promedio3(78, 10, 25);
	
	printf("\nPROMEDIO %.4f", valor);
	
	
	return 0;
}

/* power: eleva la base a la n-esima potencia; n >= 0*/
int power(int base, int n) /* definición */
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; i++) { 
		p = p * base;
	}
	
	return p;
}	

float promedio3(int a, int b, int c) 
{
	float promedio;
	promedio = (float)(a + b + c) / 3;
	return promedio;
}