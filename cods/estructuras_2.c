#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 20
#define NUM_ALUMNOS 3

typedef struct {
    char nombre[MAX_NOMBRE];
    int matricula;
    int trimestre;
} Alumno;

Alumno crearAlumno(const char* nombre, int matricula, int trimestre);
void mostrarAlumnos(Alumno grupo[], int n);

int main() {
    Alumno grupo[NUM_ALUMNOS];

    grupo[0] = crearAlumno("Ana", 1001, 1);
    grupo[1] = crearAlumno("Luis", 1002, 2);
    grupo[2] = crearAlumno("Carla", 1003, 3);

    mostrarAlumnos(grupo, NUM_ALUMNOS);

    return 0;
}

Alumno crearAlumno(const char* nombre, int matricula, int trimestre) {
    Alumno nuevo;
    strcpy(nuevo.nombre, nombre);
    nuevo.matricula = matricula;
    nuevo.trimestre = trimestre;
    return nuevo;
}

void mostrarAlumnos(Alumno grupo[], int n) {
    printf("=== Lista de alumnos ===\n");
    for (int i = 0; i < n; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("  Nombre: %s\n", grupo[i].nombre);
        printf("  Matricula: %d\n", grupo[i].matricula);
        printf("  Trimestre: %d\n\n", grupo[i].trimestre);
    }
}
