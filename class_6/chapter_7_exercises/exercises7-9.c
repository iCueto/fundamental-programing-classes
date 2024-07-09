#include <stdio.h>

/* Cuenta caracteres.
El programa, al recibir como datos una cadena de caracteres y un caracter,
cuenta cuántas veces se encuentra el caracter en la cadena. */

int cuenta(char *, char);  // Prototipo de función

void main(void) {
    char car, cad[50];
    int res;

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    fflush(stdin);  // Limpiamos el buffer

    // Pedimos al usuario que ingrese un caracter
    printf("\nIngrese el caracter: ");
    car = getchar();

    // Llamamos a la función cuenta para contar las ocurrencias del caracter
    res = cuenta(cad, car);

    // Mostramos el resultado
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}

int cuenta(char *cad, char car) {
    int i = 0, r = 0;

    // Recorremos la cadena y contamos las ocurrencias del caracter
    while (cad[i] != '\0') {
        if (cad[i] == car)
            r++;
        i++;
    }

    return (r);
}
