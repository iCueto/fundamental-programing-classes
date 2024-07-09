#include <stdio.h>
#include <string.h>

// Vamos a manejar información sobre una comercializadora farmacéutica

typedef struct {
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void) {
    producto INV[100];
    int TAM, OPE;
    do {
        printf("Ingrese el número de productos: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);  // Verificamos que el número de productos sea correcto

    Lectura(INV, TAM);
    printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t2 – Reabastecimiento \n\t\t3 - Nuevos Productos \n\t\t4 – Inventario \n\t\t0 - Salir: ");
    scanf("%d", &OPE);
    while (OPE) {
        switch (OPE) {
            case 1: Ventas(INV, TAM); break;
            case 2: Reabastecimiento(INV, TAM); break;
            case 3: Nuevos_Productos(INV, &TAM); break; // Pasamos el parámetro por referencia porque se puede modificar el número de elementos del arreglo en la función
            case 4: Inventario(INV, TAM); break;
        }
        printf("\nIngrese operación a realizar: ");
        scanf("%d", &OPE);
    }
}

void Lectura(producto A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese la clave del producto %d: ", I + 1);
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("Ingrese el nombre del producto %d: ", I + 1);
        gets(A[I].nombre);
        printf("Ingrese el precio del producto %d: ", I + 1);
        scanf("%f", &A[I].precio);
        printf("Ingrese la existencia del producto %d: ", I + 1);
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T) {
    int I, CLAVE, CANT;
    printf("Ingrese la clave del producto vendido: ");
    scanf("%d", &CLAVE);
    printf("Ingrese la cantidad vendida: ");
    scanf("%d", &CANT);
    for (I = 0; I < T; I++) {
        if (A[I].clave == CLAVE) {
            if (A[I].existencia >= CANT) {
                A[I].existencia -= CANT;
                printf("\nVenta realizada.");
            } else {
                printf("\nExistencia insuficiente.");
            }
            return;
        }
    }
    printf("\nProducto no encontrado.");
}

void Reabastecimiento(producto A[], int T) {
    int I, CLAVE, CANT;
    printf("Ingrese la clave del producto a reabastecer: ");
    scanf("%d", &CLAVE);
    printf("Ingrese la cantidad reabastecida: ");
    scanf("%d", &CANT);
    for (I = 0; I < T; I++) {
        if (A[I].clave == CLAVE) {
            A[I].existencia += CANT;
            printf("\nReabastecimiento realizado.");
            return;
        }
    }
    printf("\nProducto no encontrado.");
}

void Nuevos_Productos(producto A[], int *T) {
    int I, N;
    printf("Ingrese el número de nuevos productos: ");
    scanf("%d", &N);
    for (I = *T; I < *T + N; I++) {
        printf("Ingrese la clave del nuevo producto %d: ", I + 1);
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("Ingrese el nombre del nuevo producto %d: ", I + 1);
        gets(A[I].nombre);
        printf("Ingrese el precio del nuevo producto %d: ", I + 1);
        scanf("%f", &A[I].precio);
        printf("Ingrese la existencia del nuevo producto %d: ", I + 1);
        scanf("%d", &A[I].existencia);
    }
    *T += N;
}

void Inventario(producto A[], int T) {
    int I;
    printf("\nInventario de productos:");
    for (I = 0; I < T; I++) {
        printf("\nClave: %d \t Nombre: %s \t Precio: %.2f \t Existencia: %d", A[I].clave, A[I].nombre, A[I].precio, A[I].existencia);
    }
}
