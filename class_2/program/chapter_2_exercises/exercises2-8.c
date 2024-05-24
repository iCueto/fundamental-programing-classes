#include <stdio.h>

/* Orden de tres números.
El programa, al recibir como datos tres números,
los ordena de mayor a menor.
P, S, R: variables de tipo real. */

int main(void)
{
    // Declara las variables para los tres números
    float P, S, R;
    // Solicita al usuario que ingrese los tres números
    printf("Ingrese los tres números: ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%f %f %f", &P, &S, &R);
    // Ordena los números de mayor a menor usando estructuras selectivas anidadas
    if (P > S)
    {
        if (P > R)
        {
            if (S > R)
                printf("\nEl orden es: %.2f, %.2f, %.2f", P, S, R);
            else
                printf("\nEl orden es: %.2f, %.2f, %.2f", P, R, S);
        }
        else
            printf("\nEl orden es: %.2f, %.2f, %.2f", R, P, S);
    }
    else
    {
        if (S > R)
        {
            if (P > R)
                printf("\nEl orden es: %.2f, %.2f, %.2f", S, P, R);
            else
                printf("\nEl orden es: %.2f, %.2f, %.2f", S, R, P);
        }
        else
            printf("\nEl orden es: %.2f, %.2f, %.2f", R, S, P);
    }
}
