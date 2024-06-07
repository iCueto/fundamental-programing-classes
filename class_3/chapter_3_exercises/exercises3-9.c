#include <stdio.h>

/* Conversión de decimal a hexadecimal.
El programa, al recibir como dato un entero positivo, 
calcula su representación en hexadecimal.
NUM y HEX: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y su representación en hexadecimal
    int NUM, INDEX = 0;
    char HEX[32];
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo while para calcular la representación en hexadecimal
    while (NUM > 0)
    {
        // Almacenamos el residuo de NUM dividido por 16 en el arreglo HEX
        int REM = NUM % 16;
        if (REM < 10)
            HEX[INDEX] = REM + '0';
        else
            HEX[INDEX] = REM - 10 + 'A';
        // Dividimos NUM entre 16
        NUM /= 16;
        // Incrementamos el índice
        INDEX++;
    }
    // Imprimimos la representación en hexadecimal en orden inverso
    printf("\nLa representación hexadecimal es: ");
    for (int i = INDEX - 1; i >= 0; i--)
        printf("%c", HEX[i]);
}
