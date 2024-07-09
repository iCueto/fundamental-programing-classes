#include <stdio.h>

/* Sustituye un carácter en una cadena.
El programa, al recibir como datos una cadena de caracteres y dos caracteres,
sustituye todas las apariciones del primer carácter en la cadena por el segundo
carácter. */

void sustituye(char *, char, char); // Prototipo de función

void main(void) {
    char cad[50], car1, car2;

    // Pedimos al usuario que ingrese la cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    // Pedimos al usuario que ingrese los caracteres a sustituir
    printf("\nIngrese el carácter a sustituir: ");
    car1 = getchar();
    getchar(); // Consumimos el salto de línea
    printf("\nIngrese el carácter por el que se sustituirá: ");
    car2 = getchar();

    // Llamamos a la función sustituye para realizar la sustitución
    sustituye(cad, car1, car2);

    // Mostramos la cadena resultante
    printf("\n\nLa cadena resultante es: ");
    puts(cad);
}

void sustituye(char *cadena, char c1, char c2) {
    int i = 0;

    // Recorremos la cadena y realizamos la sustitución
    while (cadena[i] != '\0') {
        if (cadena[i] == c1)
            cadena[i] = c2;
        i++;
    }
}
