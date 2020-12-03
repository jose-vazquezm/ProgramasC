#include <stdio.h>
 
int main()
{
    int x, y, factorial;
 
    printf( "Introduce un numero para calcular el factorial: " );
    scanf( "%i", &x);
    
    y = x;
    
    factorial = x; // 5
    
    do {
    	x = x-1; // 0
    	factorial = factorial * x; // 120 * 0 = 0
	} while (x>1);
	
	
	
	printf("El factorial de %i es %i", y, factorial);
    
    /*int x = 5;
    int factorial;
    
    factorial = 5 x 4 x 3 x 2 x 1
    
    factorial = x;  // 5
    
    x-- // 4
    
    factorial = factorial * x;  // 5 * 4 = 20
    
    x-- // 3
    
    factorial = factorial * x;  // 20 * 3 = 60
    
    x-- // 2
    
    factorial = factorial * x; // 60 * 2 = 120
    
    x-- // 1
    
    factorial = factorial * x; // 120 * 1 = 120
    
    x-- // 0 parar
    
    
    "El factorial de 5 es 120"*/
}
