#include <stdio.h>
#include <string.h>

// Vamos a declarar una estructura llamada alumno

struct alumno {
    int matricula;          // Campo para la matrícula del alumno
    char nombre[20];        // Campo para el nombre del alumno
    char carrera[20];       // Campo para la carrera del alumno
    float promedio;         // Campo para el promedio del alumno
    char direccion[20];     // Campo para la dirección del alumno
};

void main(void) {
    struct alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"}, a2, a3;
    // a1 recibe valores directamente

    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    // Los campos de a2 reciben valores por medio de una lectura
    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);
    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 2: ");
    gets(a2.direccion);

    // Los campos de a3 reciben valores por medio de asignaciones
    printf("\nIngrese la matrícula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);
    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);
    printf("Ingrese la dirección del alumno 3: ");
    gets(dir);
    strcpy(a3.direccion, dir);

    // Mostramos los datos del alumno 1
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);

    // Mostramos los datos del alumno 2
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    // Mostramos los datos del alumno 3
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}
