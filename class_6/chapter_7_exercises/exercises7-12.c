#include <stdio.h>
#include <ctype.h>

/* Cuenta letras minúsculas y mayúsculas */

void main(void) {
    // Declaramos un arreglo de caracteres para almacenar la cadena
    char cad[50];
    int i = 0, mi = 0, ma = 0;

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese la cadena de caracteres (máximo 50 caracteres): ");
    gets(cad);

    // Recorremos la cadena y contamos minúsculas y mayúsculas
    while (cad[i] != '\0') {
        if (islower(cad[i]))  // Verificamos si es minúscula
            mi++;
        else if (isupper(cad[i]))  // Verificamos si es mayúscula
            ma++;
        i++;
    }

    // Mostramos el número de letras minúsculas y mayúsculas
    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
