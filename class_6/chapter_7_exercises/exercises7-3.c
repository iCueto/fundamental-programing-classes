#include <stdio.h>
#include <ctype.h>

/* Verifica si un caracter es minúscula o mayúscula */

void main(void) {
    char p;
    // Pedimos al usuario que ingrese un caracter
    printf("\nIngrese un caracter: ");
    p = getchar();  // Usamos getchar para leer el caracter

    // Verificamos si el caracter es una letra minúscula o mayúscula
    if (islower(p))
        printf("\nEl caracter es minúscula");
    else if (isupper(p))
        printf("\nEl caracter es mayúscula");
    else
        printf("\nEl caracter no es una letra");
}
