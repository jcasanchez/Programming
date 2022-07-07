//Crear un struct que almacence los siguientes datos de una persona:
// Ampliar el programa para que se cree un array de structs de forma
// que se puedan tener los datos de 10 personas
// Posteriormente escoger una eprsona y mostrar su informacion


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	puts("Edad: ")
	scanf("%d", &persona.edad);
	getchar();
	fprintf(fichero, "%d\t", perosna.edad);
	puts("Ciudad: ");
	gets(persona.ciudad);
	fputs(persona.ciudad, fichero):
	fclose(fichero);
}





fichero = fopen("gente.dat", "wt");
if(fichero == NULL){
	printf("No se pudo encontrar el archivo.\n"
} else {
	while (!feof(fichero)){
		feget(persona.nombre), 60, fichero);
		puts(persona.nombre);
		fscanf(fichero, "%d", &persona.edad);
		getchar();
		printf("%d", persona.edad);
fgets(persona.ciudad, 60, fichero);
		puts(persona.ciudad);