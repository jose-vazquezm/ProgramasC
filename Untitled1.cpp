#include <stdio.h>

main()
{
	int w, x, y, z;

	printf ("\nIntroduzca un valor para w\n");
		scanf ("%i",&w);
	printf ("\nIntroduzca un valor para x\n");
		scanf ("%i",&x);
	printf ("\nIntroduzca un valor para y\n");
		scanf ("%i",&y);
	printf ("\nIntroduzca un valor para z\n");
		scanf ("%i",&z);
	
	if ((w>x)&&(w>y)&&(w>z))	
	{
			printf ("\nEl número en w es el mayor de todos\n");
	}
	else
	{
		if ((x>w)&&(x>y)&&(x>z))
		{
			printf ("\nEl número en x es el mayor de todos\n");
		}
		else
		{
			if ((y>w)&&(y>x)&&(y>z))
			{
				printf ("\nEl número en y es el mayor de todos\n");
			}
			else
			{
				if ((z>w)&&(z>x)&&(z>y))
				{
					printf ("\nEl número en z es el mayor de todos\n");
				}
				else 
				{
					// ALGUN OTRO CASO DIFERENTE
				}
			}
		
		}
	}
		
}
