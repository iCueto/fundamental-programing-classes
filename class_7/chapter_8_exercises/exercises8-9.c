#include <stdio.h>
#include <string.h>

// Vamos a manejar información sobre bienes raíces

typedef struct {
    char zona[20];      // Campo para la zona
    char calle[20];     // Campo para la calle
    char colo[20];      // Campo para la colonia
} ubicacion;

typedef struct {
    char clave[5];      // Campo para la clave de la propiedad
    float scu;          // Campo para la superficie cubierta
    float ste;          // Campo para la superficie del terreno
    char car[50];       // Campo para las características
    ubicacion ubi;      // Campo de tipo estructura ubicación
    float precio;       // Campo para el precio
    char dispo;         // Campo para la disponibilidad
} propiedades;

void Lectura(propiedades *, int);
void F1(propiedades *, int);
void F2(propiedades *, int);

void main(void) {
    propiedades PROPIE[100];
    int TAM;
    do {
        printf("Ingrese el número de propiedades: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);   // Verificamos que el tamaño del arreglo sea correcto

    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
}

void Lectura(propiedades A[], int T) {
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese la clave de la propiedad %d: ", I + 1);
        scanf("%s", A[I].clave);
        printf("Ingrese la superficie cubierta de la propiedad %d: ", I + 1);
        scanf("%f", &A[I].scu);
        printf("Ingrese la superficie del terreno de la propiedad %d: ", I + 1);
        scanf("%f", &A[I].ste);
        fflush(stdin);
        printf("Ingrese las características de la propiedad %d: ", I + 1);
        gets(A[I].car);
        printf("Ingrese la zona de la propiedad %d: ", I + 1);
        gets(A[I].ubi.zona);
        printf("Ingrese la calle de la propiedad %d: ", I + 1);
        gets(A[I].ubi.calle);
        printf("Ingrese la colonia de la propiedad %d: ", I + 1);
        gets(A[I].ubi.colo);
        printf("Ingrese el precio de la propiedad %d: ", I + 1);
        scanf("%f", &A[I].precio);
        fflush(stdin);
        printf("Ingrese la disponibilidad de la propiedad %d (V para venta, R para renta): ", I + 1);
        scanf("%c", &A[I].dispo);
    }
}

void F1(propiedades A[], int T) {
    int I;
    printf("\nPropiedades disponibles para venta en la zona de Miraflores entre 450,000 y 650,000 nuevos soles:");
    for (I = 0; I < T; I++) {
        if (strcmp(A[I].ubi.zona, "Miraflores") == 0 && A[I].precio >= 450000 && A[I].precio <= 650000 && A[I].dispo == 'V') {
            printf("\nClave: %s \t Superficie Cubierta: %.2f \t Superficie Terreno: %.2f \t Características: %s \t Calle: %s \t Colonia: %s \t Precio: %.2f",
                   A[I].clave, A[I].scu, A[I].ste, A[I].car, A[I].ubi.calle, A[I].ubi.colo, A[I].precio);
        }
    }
}

void F2(propiedades A[], int T) {
    int I;
    char ZONA[20];
    float INF, SUP;
    printf("Ingrese la zona geográfica: ");
    scanf("%s", ZONA);
    printf("Ingrese el rango inferior del monto: ");
    scanf("%f", &INF);
    printf("Ingrese el rango superior del monto: ");
    scanf("%f", &SUP);
    printf("\nPropiedades disponibles para renta en la zona de %s entre %.2f y %.2f nuevos soles:", ZONA, INF, SUP);
    for (I = 0; I < T; I++) {
        if (strcmp(A[I].ubi.zona, ZONA) == 0 && A[I].precio >= INF && A[I].precio <= SUP && A[I].dispo == 'R') {
            printf("\nClave: %s \t Superficie Cubierta: %.2f \t Superficie Terreno: %.2f \t Características: %s \t Calle: %s \t Colonia: %s \t Precio: %.2f",
                   A[I].clave, A[I].scu, A[I].ste, A[I].car, A[I].ubi.calle, A[I].ubi.colo, A[I].precio);
        }
    }
}
