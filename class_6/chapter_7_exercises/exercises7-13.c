#include <stdio.h>

/* Longitud de una cadena.
El programa, al recibir como dato una cadena de caracteres, calcula su longitud.
La cadena se maneja como un apuntador. */

int cuenta(char *); // Prototipo de función

void main(void) {
    char cad[50];
    int lon;

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    // Llamamos a la función cuenta para calcular la longitud
    lon = cuenta(cad);

    // Mostramos la longitud de la cadena
    printf("\n\nLa longitud de la cadena es: %d", lon);
}

int cuenta(char *cadena) {
    int i = 0;

    // Recorremos la cadena hasta encontrar el carácter nulo '\0'
    while (cadena[i] != '\0')
        i++;

    return (i); // Devolvemos la longitud de la cadena
}
