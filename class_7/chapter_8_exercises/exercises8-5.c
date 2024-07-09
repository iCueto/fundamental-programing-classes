#include <stdio.h>
#include <string.h>

// Ahora vamos a aprender sobre uniones

union datos {
    char celular[15];       // Campo para el celular
    char correo[20];        // Campo para el correo electrónico
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

void main(void) {
    alumno a1 = {120, "María", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;
    Lectura(&a2);
    Lectura(&a3);
    printf("\nDatos del alumno 1\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a1.matricula, a1.nombre, a1.carrera, a1.promedio, a1.personales.celular);
    printf("\nDatos del alumno 2\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a2.matricula, a2.nombre, a2.carrera, a2.promedio, a2.personales.celular);
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.personales.celular);
}

void Lectura(alumno *a) {
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    printf("Ingrese la carrera: ");
    gets(a->carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el celular: ");
    gets(a->personales.celular);
}
