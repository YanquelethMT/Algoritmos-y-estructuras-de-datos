#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 20
#define NUM_ALUMNOS 3

typedef struct Alumno{
    char nombre[MAX_NOMBRE];
    int matricula;
    int trimestre;
} Alumno;

int main() {

	Alumno a1;

	strcpy(a1.nombre, "Fab");
	a1.matricula = 1005;
	a1.trimestre = 10;

	printf("=== variable de tipo alumno ===\n");

	printf("  Nombre: %s\n", a1.nombre);
	printf("  Matricula: %d\n", a1.matricula);
	printf("  Trimestre: %d\n\n", a1.trimestre);


    Alumno grupo[NUM_ALUMNOS];

    strcpy(grupo[0].nombre, "Ana");
    grupo[0].matricula = 1001;
    grupo[0].trimestre = 1;

    strcpy(grupo[1].nombre, "Luis");
    grupo[1].matricula = 1002;
    grupo[1].trimestre = 2;

    strcpy(grupo[2].nombre, "Carla");
    grupo[2].matricula = 1003;
    grupo[2].trimestre = 3;

    printf("=== Lista de alumnos ===\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("  Nombre: %s\n", grupo[i].nombre);
        printf("  Matricula: %d\n", grupo[i].matricula);
        printf("  Trimestre: %d\n\n", grupo[i].trimestre);
    }



    return 0;
}
