#include <stdio.h>

/* Año bisiesto.
El programa, al recibir como dato un año,
determina si es bisiesto.
AÑO: variable de tipo entero. */

int main(void)
{
    // Declara la variable para el año
    int AÑO;
    // Solicita al usuario que ingrese un año
    printf("Ingrese un año: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable AÑO
    scanf("%d", &AÑO);
    // Verifica si el año es divisible por 4 y no es divisible por 100, o es divisible por 400
    if ((AÑO % 4 == 0 && AÑO % 100 != 0) || (AÑO % 400 == 0))
        // Si el año cumple con alguna de las condiciones, imprime "El año es bisiesto"
        printf("\nEl año es bisiesto");
    // Si ninguna de las condiciones anteriores se cumple, el año no es bisiesto
    else
        // Imprime "El año no es bisiesto"
        printf("\nEl año no es bisiesto");
}
