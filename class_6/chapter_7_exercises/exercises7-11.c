#include <stdio.h>
#include <ctype.h>

/* Verifica si un caracter en una posición es minúscula */

void main(void) {
    char p, cad[50];
    int n;

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    gets(cad);

    // Pedimos al usuario que ingrese la posición a verificar
    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);

    // Verificamos si la posición es válida
    if ((n >= 0) && (n < 50)) {
        p = cad[n - 1];  // Obtenemos el caracter en la posición
        if (islower(p))
            printf("\n%c es una letra minúscula", p);
        else
            printf("\n%c no es una letra minúscula", p);
    } else {
        printf("\nEl valor ingresado de n es incorrecto");
    }
}
