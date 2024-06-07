#include <stdio.h>

/* Potencia de un número usando una función.
El programa define una función para calcular la potencia de un número entero.
BASE y EXP: variables de tipo entero.
potencia: función que calcula la potencia de un número. */

// Declaramos la función potencia
int potencia(int BASE, int EXP)
{
    // Inicializamos el resultado a 1
    int resultado = 1;
    // Usamos un ciclo for para calcular la potencia
    for (int i = 0; i < EXP; i++)
        // Multiplicamos el resultado por la base en cada iteración
        resultado *= BASE;
    // Retornamos el resultado
    return resultado;
}

void main(void)
{
    // Declaramos las variables para la base y el exponente
    int BASE, EXP;
    // Solicitamos al usuario que ingrese la base y el exponente
    printf("Ingrese la base y el exponente: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables BASE y EXP
    scanf("%d %d", &BASE, &EXP);
    // Llamamos a la función potencia y almacenamos el resultado en la variable resultado
    int resultado = potencia(BASE, EXP);
    // Imprimimos el resultado
    printf("La potencia de %d elevado a %d es: %d", BASE, EXP, resultado);
}
