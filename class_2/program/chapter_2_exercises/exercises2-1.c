#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso 
universitario, escribe aprobado si su promedio es mayor o igual a 6.
PRO: variable de tipo real. */

int main(void)
{
    // Declara la variable para el promedio del alumno
    float PRO;
    // Se solicita al usuario que ingrese el promedio
    printf("Ingrese el promedio del alumno: ");
    // Lee el valor ingresado por el usuario y lo se lo asigna a la variable PRO
    scanf("%f", &PRO);
    // Verifica si el promedio es mayor o igual a 6
    if (PRO >= 6)
        // Si el promedio es mayor o igual a 6, imprime "Aprobado"
        printf("\nAprobado");
}
