#include <stdio.h>

int power(int m, int n); /* declaración */

float promedio3(int a, int b, int c);

int array_length(int intArray[]);

int MAX_NUM_ELEMENTOS = 10;

main()
{
	int i;

	/*for (i = 0; i < 10; i++) {
		printf("%i elevado a la %i potencia es igual a: %i\n", i, 2, power(i, 2));
	}
	
	printf("\n9 elevado a la 9 potencia es: %i", power(9, 9));*/
	
	/*float valor;
	valor = promedio3(78, 10, 25);
	
	printf("\nPROMEDIO %.4f", valor);*/
	
	
	/*int numeros[10] = {1,2,3,3,4,5,6,8,9,2};
	for (i=0; i <= 10; i++) {
		printf("Elemento %i tiene: %i\n", i, numeros[i]);
	}*/
	
	for (i=0; i< 10; i++) {
		printf ("El modulo de %i entre 2 es: %i\n", i, i%2);
	}
	
	/*int numeros[MAX_NUM_ELEMENTOS];
	
	for (i=0; i < MAX_NUM_ELEMENTOS; i++) {
		printf("\nDame el numero %i: ", i + 1);
		scanf("%i", &numeros[i]);
		
	}
	
	printf("\nsizeof %i", sizeof(numeros));
	printf("\nsizeof %i", sizeof(numeros[0]));
	
	printf("\nSize of the array is %i", array_length(numeros));*/
	
	/* For para imprimir el arreglo*/
	/*for (i=0; i < 10; i++) {
		printf("\nElemento %i tiene: %i", i, numeros[i]);
	}*/

	
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

int array_length(int intArray[])
{
	printf("\nsizeof %i", sizeof(intArray));
	printf("\nsizeof %i", sizeof(intArray[0]));
    return (int)( sizeof(intArray) / sizeof(intArray[0]) );
}
