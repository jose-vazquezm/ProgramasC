#include <stdio.h>

void printUserInfo(char nombre[], char direccion[], int edad, char hobbies[]); /* declaracion*/


main()
{
	
	printUserInfo("David Sanchez", "Un lugar muy lejano", 23, "Ver peliculas");
	printUserInfo("Jose Vazquez", "Basurero", 39, "Leer libros");
	printUserInfo("Andres Pelon", "Colinas del Tequil #23", 14, "Dormir");	
	
	return 0;
}

void printUserInfo(char nombre[], char direccion[], int edad, char hobbies[]) {
	printf("\nINFORMACION DEL USUARIO\n");
	printf("Nombre: %s\n", nombre);
	printf("Direccion: %s\n", direccion);
	printf("Edad: %i\n", edad);
	printf("Hobbies: %s\n", hobbies);
}
