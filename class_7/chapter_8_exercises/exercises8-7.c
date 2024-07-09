#include <stdio.h>
#include <string.h>

// ¡Vamos a ver otro ejemplo con estructuras!

typedef struct {
    char mat[20];       // Campo para la materia
    int pro;            // Campo para el promedio
} matpro;

typedef struct {
    int matri;          // Campo para la matrícula del alumno
    char nom[20];       // Campo para el nombre del alumno
    matpro cal[5];      // Arreglo unidimensional de tipo estructura matpro
} alumno;

void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

void main(void) {
    alumno ALU[50];
    int TAM;
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);   // Verificamos que el tamaño del arreglo sea correcto

    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}

void Lectura(alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("Ingrese la matrícula del alumno %d: ", I + 1);
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", I + 1);
        gets(A[I].nom);
        for (J = 0; J < 5; J++) {
            printf("Ingrese la materia %d del alumno %d: ", J + 1, I + 1);
            gets(A[I].cal[J].mat);
            printf("Ingrese el promedio de la materia %d del alumno %d: ", J + 1, I + 1);
            scanf("%d", &A[I].cal[J].pro);
            fflush(stdin);
        }
    }
}

void F1(alumno A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nMatrícula: %d \t Nombre: %s", A[I].matri, A[I].nom);
        for (J = 0; J < 5; J++) {
            printf("\nMateria: %s \t Promedio: %d", A[I].cal[J].mat, A[I].cal[J].pro);
        }
    }
}

void F2(alumno A[], int T) {
    int I;
    printf("\nAlumnos con promedio mayor a 9 en todas las materias:");
    for (I = 0; I < T; I++) {
        if (A[I].cal[0].pro > 9 && A[I].cal[1].pro > 9 && A[I].cal[2].pro > 9 && A[I].cal[3].pro > 9 && A[I].cal[4].pro > 9) {
            printf("\nMatrícula: %d \t Nombre: %s", A[I].matri, A[I].nom);
        }
    }
}

void F3(alumno A[], int T) {
    int I;
    float sum = 0.0;
    for (I = 0; I < T; I++) {
        sum += A[I].cal[3].pro;
    }
    printf("\nPromedio general de la materia 4: %.2f", sum / T);
}
