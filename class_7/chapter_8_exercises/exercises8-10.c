#include <stdio.h>
#include <string.h>

// Vamos a manejar información sobre los vendedores

typedef struct {
    char noba[10];       // Campo para el nombre del banco
    char nucu[10];       // Campo para el número de cuenta
} banco;

typedef union {
    banco che;           // Campo de tipo estructura banco para cheque
    banco nomi;          // Campo de tipo estructura banco para nómina
    char venta;          // Campo para ventanilla
} fpago;

typedef struct {
    char cnu[20];        // Campo para la calle y número
    char col[20];        // Campo para la colonia
    char cp[5];          // Campo para el código postal
    char ciu[15];        // Campo para la ciudad
} domicilio;

typedef struct {
    int num;             // Campo para el número de vendedor
    char nom[20];        // Campo para el nombre del vendedor
    float ven[12];       // Campo para las ventas del año (arreglo unidimensional de tipo real)
    domicilio domi;      // Campo de tipo estructura domicilio
    float sal;           // Campo para el salario mensual
    fpago pago;          // Campo de tipo unión fpago
    int cla;             // Campo para la clave de forma de pago
} vendedor;

void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);

void main(void) {
    vendedor VENDEDORES[100];
    int TAM;
    do {
        printf("Ingrese el número de vendedores: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);   // Verificamos que el tamaño del arreglo sea correcto

    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);
}

void Lectura(vendedor A[], int T) {
    int I, J;
    for (I = 0; I < T; I++) {
        printf("Ingrese el número del vendedor %d: ", I + 1);
        scanf("%d", &A[I].num);
        fflush(stdin);
        printf("Ingrese el nombre del vendedor %d: ", I + 1);
        gets(A[I].nom);
        for (J = 0; J < 12; J++) {
            printf("Ingrese la venta del mes %d del vendedor %d: ", J + 1, I + 1);
            scanf("%f", &A[I].ven[J]);
        }
        fflush(stdin);
        printf("Ingrese la calle y número del domicilio del vendedor %d: ", I + 1);
        gets(A[I].domi.cnu);
        printf("Ingrese la colonia del domicilio del vendedor %d: ", I + 1);
        gets(A[I].domi.col);
        printf("Ingrese el código postal del domicilio del vendedor %d: ", I + 1);
        gets(A[I].domi.cp);
        printf("Ingrese la ciudad del domicilio del vendedor %d: ", I + 1);
        gets(A[I].domi.ciu);
        printf("Ingrese el salario del vendedor %d: ", I + 1);
        scanf("%f", &A[I].sal);
        fflush(stdin);
        printf("Ingrese la clave de forma de pago del vendedor %d (1 - Cheque, 2 - Nómina, 3 - Ventanilla): ", I + 1);
        scanf("%d", &A[I].cla);
        fflush(stdin);
        switch (A[I].cla) {
            case 1:
                printf("Ingrese el nombre del banco para cheque del vendedor %d: ", I + 1);
                gets(A[I].pago.che.noba);
                printf("Ingrese el número de cuenta para cheque del vendedor %d: ", I + 1);
                gets(A[I].pago.che.nucu);
                break;
            case 2:
                printf("Ingrese el nombre del banco para nómina del vendedor %d: ", I + 1);
                gets(A[I].pago.nomi.noba);
                printf("Ingrese el número de cuenta para nómina del vendedor %d: ", I + 1);
                gets(A[I].pago.nomi.nucu);
                break;
            case 3:
                printf("El pago se realizará por ventanilla para el vendedor %d.", I + 1);
                break;
        }
    }
}

void F1(vendedor A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas > 200,000");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        if (SUM > 200000.00) {
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
        }
    }
}

void F2(vendedor A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas < 100,000");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        if (SUM < 100000.00) {
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
        }
    }
}

void F3(vendedor A[], int T) {
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas < 300,000");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        if (SUM < 300000.00) {
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
        }
    }
}

void F4(vendedor A[], int T) {
    int I;
    printf("\n\t\tVendedores con Cuenta en el Banco");
    for (I = 0; I < T; I++) {
        if (A[I].cla == 1) {
            printf("\nNúmero de vendedor: %d\nBanco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
        }
    }
}
