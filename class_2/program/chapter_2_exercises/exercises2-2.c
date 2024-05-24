#include <stdio.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si éste es inferior a $1,500.
PRE y NPR: variable de tipo real. */

int main(void)
{
    // Se declara las variables para el precio y el nuevo precio
    float PRE, NPR;
    // Solicita al usuario que ingrese el precio del producto
    printf("Ingrese el precio del producto: ");
    // Lee el valor ingresado y lo asigna a la variable PRE
    scanf("%f", &PRE);
    // Verifica si el precio es menor a 1500
    if (PRE < 1500)
    {
        // Si el precio es menor a 1500, calcula el nuevo precio con el incremento del 11%
        NPR = PRE * 1.11;
        // Imprimimos el nuevo precio del producto
        printf("\nNuevo precio: %7.2f", NPR);
    }
}
