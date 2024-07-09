#include <stdio.h>
#include <string.h>

// Ahora vamos a ver estructuras anidadas

typedef struct {
    char calle[30];
    int numero;
    int cp;
    char localidad[30];
} direccion;

typedef struct {
    char nombre[30];
    char departamento[20];
    float sueldo;
    direccion domicilio;
} empleado;

void Lectura(empleado *, int);
void F1(empleado *, int);
void F2(empleado *, int);

void main(void) {
    empleado EMP[100];
    int TAM;
    do {
        printf("Ingrese el número de empleados: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);  // Validamos el tamaño del arreglo

    Lectura(EMP, TAM);
    F1(EMP, TAM);
    F2(EMP, TAM);
}

void Lectura(empleado A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        fflush(stdin);
        printf("Ingrese el nombre del empleado %d: ", I + 1);
        gets(A[I].nombre);
        printf("Ingrese el departamento del empleado %d: ", I + 1);
        gets(A[I].departamento);
        printf("Ingrese el sueldo del empleado %d: ", I + 1);
        scanf("%f", &A[I].sueldo);
        fflush(stdin);
        printf("Ingrese la calle del domicilio del empleado %d: ", I + 1);
        gets(A[I].domicilio.calle);
        printf("Ingrese el número del domicilio del empleado %d: ", I + 1);
        scanf("%d", &A[I].domicilio.numero);
        printf("Ingrese el código postal del domicilio del empleado %d: ", I + 1);
        scanf("%d", &A[I].domicilio.cp);
        fflush(stdin);
        printf("Ingrese la localidad del domicilio del empleado %d: ", I + 1);
        gets(A[I].domicilio.localidad);
    }
}

void F1(empleado A[], int T) {
    int I;
    printf("\nListado de empleados:");
    for (I = 0; I < T; I++) {
        printf("\nNombre: %s \t Departamento: %s \t Sueldo: %.2f \t Dirección: %s %d %d %s",
               A[I].nombre, A[I].departamento, A[I].sueldo, A[I].domicilio.calle, A[I].domicilio.numero, A[I].domicilio.cp, A[I].domicilio.localidad);
    }
}

void F2(empleado A[], int T) {
    int I;
    printf("\nEmpleados con sueldo mayor a 20,000:");
    for (I = 0; I < T; I++) {
        if (A[I].sueldo > 20000) {
            printf("\nNombre: %s \t Sueldo: %.2f", A[I].nombre, A[I].sueldo);
        }
    }
}
