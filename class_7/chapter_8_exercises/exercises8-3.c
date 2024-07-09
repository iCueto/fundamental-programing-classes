#include <stdio.h>
#include <string.h>

// Otro ejemplo más con estructuras

typedef struct {
    int matricula;
    char nombre[30];
    float cal[5];  // Promedios de las materias
} alumno;

void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

void main(void) {
    alumno ARRE[100];
    int TAM;
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);  // Validamos el tamaño del arreglo

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);
}

void Lectura(alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("Ingrese la matrícula del alumno %d: ", I + 1);
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", I + 1);
        gets(A[I].nombre);
        for (J = 0; J < 5; J++) {
            printf("Ingrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(alumno A[], int T) {
    int I, J;
    float sum;
    for (I = 0; I < T; I++) {
        sum = 0.0;
        for (J = 0; J < 5; J++) {
            sum += A[I].cal[J];
        }
        printf("\nMatrícula: %d \t Promedio: %.2f", A[I].matricula, sum / 5);
    }
}

void F2(alumno A[], int T) {
    int I;
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia:");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("\nMatrícula: %d", A[I].matricula);
        }
    }
}

void F3(alumno A[], int T) {
    int I;
    float sum = 0.0;
    for (I = 0; I < T; I++) {
        sum += A[I].cal[3];
    }
    printf("\nPromedio general de la materia 4: %.2f", sum / T);
}
