#include <stdio.h>

/* Categoría de empleado.
El programa, al recibir como datos la categoría y antigüedad de un empleado,
determina si cumple con los requisitos para un ascenso.
CAT y ANT: variables de tipo entero. */

int main(void)
{
    // Declara las variables para la categoría y la antigüedad del empleado
    int CAT, ANT;
    // Solicita al usuario que ingrese la categoría y la antigüedad del empleado
    printf("Ingrese la categoría y la antigüedad del empleado: ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%d %d", &CAT, &ANT);
    // Verifica si la categoría y la antigüedad cumplen con los requisitos para un ascenso
    if ((CAT == 3 || CAT == 4) && ANT >= 5)
        // Si el empleado cumple con los requisitos, imprime "Cumple con los requisitos"
        printf("\nCumple con los requisitos");
    // Verifica si la categoría y la antigüedad cumplen con los requisitos para un ascenso
    else if (CAT == 2 && ANT >= 7)
        // Si el empleado cumple con los requisitos, imprime "Cumple con los requisitos"
        printf("\nCumple con los requisitos");
    // Si ninguna de las condiciones anteriores se cumple, el empleado no cumple con los requisitos
    else
        // Imprime "No cumple con los requisitos"
        printf("\nNo cumple con los requisitos");
}
