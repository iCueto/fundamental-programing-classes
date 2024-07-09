#include <stdio.h>
#include <string.h>

/* Subcadena de una cadena.
El programa, al recibir como dato una cadena de caracteres y dos posiciones
enteras, extrae la subcadena correspondiente. */

void subcadena(char *, char *, int, int); // Prototipo de función

void main(void) {
    char cad[50], sub[50];
    int pos1, pos2;

    // Pedimos al usuario que ingrese la cadena de caracteres y las posiciones
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    printf("\nIngrese la primera posición: ");
    scanf("%d", &pos1);
    printf("\nIngrese la segunda posición: ");
    scanf("%d", &pos2);

    // Llamamos a la función subcadena para extraer la subcadena
    subcadena(sub, cad, pos1, pos2);

    // Mostramos la subcadena resultante
    printf("\n\nLa subcadena es: ");
    puts(sub);
}

void subcadena(char *sub, char *cad, int pos1, int pos2) {
    int i, j = 0;

    // Extraemos los caracteres de la subcadena
    for (i = pos1 - 1; i < pos2; i++) {
        sub[j] = cad[i];
        j++;
    }

    // Añadimos el carácter nulo '\0' al final de la subcadena
    sub[j] = '\0';
}
