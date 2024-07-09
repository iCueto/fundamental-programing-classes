#include <stdio.h>

/* Cifrado de cadenas.
El programa, al recibir como dato una cadena de caracteres, la cifra desplazando
cada uno de sus caracteres una posición adelante en el alfabeto. */

void cifra(char *); // Prototipo de función

void main(void) {
    char cad[50];

    // Pedimos al usuario que ingrese la cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    // Llamamos a la función cifra para cifrar la cadena
    cifra(cad);

    // Mostramos la cadena cifrada
    printf("\n\nLa cadena cifrada es: ");
    puts(cad);
}

void cifra(char *cadena) {
    int i = 0;

    // Recorremos la cadena y desplazamos cada carácter una posición adelante
    while (cadena[i] != '\0') {
        cadena[i]++;
        i++;
    }
}
