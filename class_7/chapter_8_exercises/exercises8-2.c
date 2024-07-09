#include <string.h>
#include <stdio.h>

struct alumno
{
  int matricula;
  char nombre[20];
  char carrera[20];
  float promedio;
  char direccion[20];
};

void Lectura(struct alumno *);

void main(void)
{
  struct alumno a0 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
  struct alumno *a3, *a4, *a5, a6;

  a3 = &a0;
  a4 = &a6;

  printf("\nIngrese la matricula del alumno 4: ");
  scanf("%d", &(*a4).matricula);
  fflush(stdin);
  printf("\nIngrese el nombre del alumno 4: ");
  gets(a4->nombre);
  printf("\nIngrese la carrera del alumno 4: ");
  gets((*a4).carrera);
  printf("\nIngrese el promedio del alumno 4: ");
  scanf("%f", &a4->promedio);
  fflush(stdin);
  printf("\nIngrese la direccion del alumno 4: ");
  gets(a4->direccion);

  a5 = &a6;
  Lectura(a5);

  Lectura(&a6);
  printf("\nDatos del alumno 3: ");

  printf("%d\t%s\t%s\t%2f\t%s\n", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);

  printf("\nDatos del alumno 4: ");
  printf("%d\t%s\t%s\t%2f\t%s\n", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);

  printf("\nDatos del alumno 5: ");
  printf("%d\t%s\t%s\t%2f\t%s\n", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);

  printf("\nDatos del alumno 6: ");
  printf("%d\t%s\t%s\t%2f\t%s\n", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);
}

void Lectura(struct alumno *a)
{
  printf("\nIngrese la matricula del alumno: ");
  scanf("%d", &(*a).matricula);
  fflush(stdin);
  printf("\nIngrese el nombre del alumno: ");
  gets(a->nombre);
  printf("\nIngrese la carrera del alumno: ");
  gets((*a).carrera);
  printf("\nIngrese el promedio del alumno: ");
  scanf("%f", &a->promedio);
  fflush(stdin);
  printf("\nIngrese la direccion del alumno: ");
  gets(a->direccion);
}
