/*
1.	Con un menu de salir - leer disco - grabar dato
2.	Cuando grabamos siempre pregunta si queremos otro registro, usar memoria dinamica
3.	Hacer un programa que ingrese estructuras de tipo alunno con memoria dinamica
4.	Ojo Debe usar el free() para liberar la memoria
5.	Grabar en disco las estructuras
6.	Abrir el archivo del disco y con memoria dinamica cargar las estructuras que estan en disco
7.	Leer e imprimir en pantalla el contenido
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct {
  char nombre[20];
  char apellido[20];
  int edad;
  int matricula;
  float promedio;
} alumno;

void leer_disco(alumno *alumnos, int *n_alumnos) {
  FILE *f;
  f = fopen("../../alumnos.dat", "rb");
  if (f == NULL) {
    printf("Error al abrir el archivo\n");
    return;
  }
  fread(n_alumnos, sizeof(int), 1, f);
  alumnos = (alumno *)malloc(sizeof(alumno) * (*n_alumnos));
  fread(alumnos, sizeof(alumno), *n_alumnos, f);
  fclose(f);
}

void grabar_disco(alumno *alumnos, int n_alumnos) {
  FILE *f;
  f = fopen("../../alumnos.dat", "wb");
  if (f == NULL) {
    printf("Error al abrir el archivo\n");
    return;
  }
  fwrite(&n_alumnos, sizeof(int), 1, f);
  fwrite(alumnos, sizeof(alumno), n_alumnos, f);
  fclose(f);
}

int main() {
  int opcion;
  int n_alumnos = 0;
  alumno *alumnos = NULL;
  while (1) {
    printf("1. Leer disco\n");
    printf("2. Grabar dato\n");
    printf("3. Salir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    switch (opcion) {
      case 1:
        leer_disco(alumnos, &n_alumnos);
        break;
      case 2:
        break;
      case 3:
        return 0;
      default:
        printf("Opcion invalida\n");
    }
  }
  return 0;
}