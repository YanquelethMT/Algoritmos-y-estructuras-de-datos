#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 20

typedef struct {
    char nombre[MAX_NOMBRE];
    int matricula;
    int trimestre;
} Alumno;

int main() {
    Alumno a1, a2, a3;

    /* Alumno 1 */
    strcpy(a1.nombre, "Ana");
    a1.matricula = 1001;
    a1.trimestre = 1;

    /* Alumno 2 */
    strcpy(a2.nombre, "Luis");
    a2.matricula = 1002;
    a2.trimestre = 2;

    /* Alumno 3 */
    strcpy(a3.nombre, "Carla");
    a3.matricula = 1003;
    a3.trimestre = 3;

    printf("=== Lista de alumnos ===\n");

    printf("Alumno 1:\n");
    printf("  Nombre: %s\n", a1.nombre);
    printf("  Matricula: %d\n", a1.matricula);
    printf("  Trimestre: %d\n\n", a1.trimestre);

    printf("Alumno 2:\n");
    printf("  Nombre: %s\n", a2.nombre);
    printf("  Matricula: %d\n", a2.matricula);
    printf("  Trimestre: %d\n\n", a2.trimestre);

    printf("Alumno 3:\n");
    printf("  Nombre: %s\n", a3.nombre);
    printf("  Matricula: %d\n", a3.matricula);
    printf("  Trimestre: %d\n\n", a3.trimestre);

    return 0;
}
