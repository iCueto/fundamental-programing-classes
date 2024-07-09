#include <stdio.h>

/* Copia de cadenas.
El programa copia una cadena en otra mediante un apuntador. */

void copia(char *, char *); // Prototipo de función

void main(void) {
    char cad1[50], cad2[50];

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);

    // Llamamos a la función copia para copiar la cadena
    copia(cad2, cad1);

    // Mostramos la cadena copiada
    printf("\n\nLa segunda cadena es: ");
    puts(cad2);
}

void copia(char *a, char *b) {
    int i = 0;

    // Recorremos la cadena b y copiamos cada carácter en la cadena a
    while (b[i] != '\0') {
        a[i] = b[i];
        i++;
    }

    // Añadimos el carácter nulo '\0' al final de la cadena a
    a[i] = '\0';
}
