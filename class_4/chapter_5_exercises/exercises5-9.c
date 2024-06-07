#include <stdio.h>

/* Conversión de grados Fahrenheit a Celsius.
El programa, al recibir como dato una temperatura en grados Fahrenheit,
la convierte a grados Celsius.
FAH y CEL: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para los grados Fahrenheit y Celsius
    float FAH, CEL;
    // Solicitamos al usuario que ingrese una temperatura en grados Fahrenheit
    printf("Ingrese una temperatura en grados Fahrenheit: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable FAH
    scanf("%f", &FAH);
    // Convertimos la temperatura a grados Celsius
    CEL = (FAH - 32) * 5 / 9;
    // Imprimimos el valor de la temperatura en grados Celsius
    printf("La temperatura en grados Celsius es: %.2f", CEL);
}
