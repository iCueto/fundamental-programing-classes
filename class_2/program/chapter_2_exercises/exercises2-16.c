#include <stdio.h>

/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

int main()
{
    // Declara las variables para la clave, categoría, antigüedad y resultado
    int CLA, CAT, ANT, RES;
    // Solicita al usuario que ingrese la clave, categoría y antigüedad del trabajador
    printf("Ingrese la clave, categoría y antigüedad del trabajador: ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%d %d %d", &CLA, &CAT, &ANT);
    // Usa una estructura selectiva múltiple para verificar las condiciones
    switch (CAT)
    {
        case 3:
        case 4:
            // Verifica si la antigüedad es mayor o igual a 5 años
            if (ANT >= 5)
                RES = 1; // El empleado cumple con los requisitos
            else
                RES = 0; // El empleado no cumple con los requisitos
            break;
        case 2:
            // Verifica si la antigüedad es mayor o igual a 7 años
            if (ANT >= 7)
                RES = 1; // El empleado cumple con los requisitos
            else
                RES = 0; // El empleado no cumple con los requisitos
            break;
        default:
            RES = 0; // El empleado no cumple con los requisitos
            break;
    }
    // Verifica el resultado y mostramos el mensaje correspondiente
    if (RES)
        // Si el empleado cumple con los requisitos, imprime el mensaje positivo
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto", CLA);
    else
        // Si el empleado no cumple con los requisitos, imprime el mensaje negativo
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto", CLA);
}
