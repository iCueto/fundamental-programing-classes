#include <stdio.h>

/* Concatenación de cadenas.
El programa, al recibir como datos dos cadenas de caracteres, las concatena. */

void concatena(char *, char *); // Prototipo de función

void main(void) {
    char cad1[50], cad2[50];

    // Pedimos al usuario que ingrese las cadenas de caracteres
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\nIngrese la segunda cadena de caracteres: ");
    gets(cad2);

    // Llamamos a la función concatena para concatenar las cadenas
    concatena(cad1, cad2);

    // Mostramos la cadena concatenada
    printf("\n\nLa cadena concatenada es: ");
    puts(cad1);
}

void concatena(char *a, char *b) {
    int i = 0, j = 0;

    // Avanzamos hasta el final de la primera cadena
    while (a[i] != '\0')
        i++;

    // Copiamos la segunda cadena al final de la primera
    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }

    // Añadimos el carácter nulo '\0' al final de la cadena resultante
    a[i] = '\0';
}
