#include <stdio.h>
#include <string.h>

/* Comparación de cadenas.
El programa compara dos cadenas de caracteres. La primera se recibe completa;
de la segunda sólo se reciben los primeros n caracteres. */

int comparacion(char *, char *, int); // Prototipo de función

void main(void) {
    char cad1[50], cad2[50];
    int n, res;

    // Pedimos al usuario que ingrese las cadenas de caracteres
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\nIngrese la segunda cadena de caracteres: ");
    gets(cad2);
    printf("\nIngrese el número de caracteres que se compararán: ");
    scanf("%d", &n);

    // Llamamos a la función comparacion para comparar las cadenas
    res = comparacion(cad1, cad2, n);

    // Mostramos el resultado de la comparación
    if (res == 0)
        printf("\n\nLas cadenas son iguales.");
    else if (res < 0)
        printf("\n\nLa primera cadena es menor.");
    else
        printf("\n\nLa primera cadena es mayor.");
}

int comparacion(char *a, char *b, int n) {
    int i = 0;

    // Comparamos las cadenas carácter por carácter hasta n caracteres o hasta encontrar el carácter nulo
    while ((a[i] == b[i]) && (i < n) && (a[i] != '\0') && (b[i] != '\0'))
        i++;

    if (i == n)
        return 0;
    else
        return (a[i] - b[i]);
}
