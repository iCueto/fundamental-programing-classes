#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
El programa, al recibir como datos varias cadenas de caracteres que contienen reales, los suma y obtiene el promedio de los mismos. */

void main(void) {
    char cad[10];
    int i = 0;
    float sum = 0.0;

    // Pedimos al usuario si desea ingresar una cadena
    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    char c = getchar();

    while (c == 'S') {
        // Pedimos al usuario que ingrese la cadena de caracteres
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);

        // Convertimos la cadena a float y sumamos
        i++;
        sum += atof(cad);

        // Preguntamos si desea ingresar otra cadena
        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }

    // Mostramos la suma y el promedio
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
}
