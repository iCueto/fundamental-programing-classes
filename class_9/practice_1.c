#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nombre[20];
  char apellido[20];
  int edad;
  int matricula;
  float promedio;
} alumno;

// Prototipos de funciones
void leer_disco(alumno **alumnos, int *n_alumnos);
void grabar_disco(alumno *alumnos, int n_alumnos);
void grabar_dato(alumno **alumnos, int *n_alumnos);
void imprimir_alumnos(alumno *alumnos, int n_alumnos);

// Lee los datos de los alumnos desde un archivo en disco
void leer_disco(alumno **alumnos, int *n_alumnos) {
  FILE *f;

  f = fopen("/Users/iskander_crow/code/fundamental-programing-classes/class_9/alumnos.dat", "rb"); // Usando ruta absoluta, el archivo no se crea o escribe si uso ruta relativa en UNIX
  if (f == NULL) {
    printf("Error al abrir el archivo\n");
    return;
  }
  fread(n_alumnos, sizeof(int), 1, f);
  *alumnos = (alumno *)malloc(sizeof(alumno) * (*n_alumnos));
  fread(*alumnos, sizeof(alumno), *n_alumnos, f);
  fclose(f);
}

void grabar_disco(alumno *alumnos, int n_alumnos) {
  FILE *f;
  f = fopen("/Users/iskander_crow/code/fundamental-programing-classes/class_9/alumnos.dat", "wb"); // Usando ruta absoluta, el archivo no se crea o escribe si uso ruta relativa en UNIX
  if (f == NULL) {
    printf("Error al abrir el archivo\n");
    return;
  }
  fwrite(&n_alumnos, sizeof(int), 1, f);
  fwrite(alumnos, sizeof(alumno), n_alumnos, f);
  fclose(f);
}

void grabar_dato(alumno **alumnos, int *n_alumnos) {
  *alumnos = (alumno *)realloc(*alumnos, sizeof(alumno) * (*n_alumnos + 1));
  printf("Ingrese el nombre del alumno: \n");
  scanf("%s", (*alumnos)[*n_alumnos].nombre);
  printf("Ingrese el apellido del alumno: \n");
  scanf("%s", (*alumnos)[*n_alumnos].apellido);
  printf("Ingrese la edad del alumno: \n");
  scanf("%d", &(*alumnos)[*n_alumnos].edad);
  printf("Ingrese la matricula del alumno: \n");
  scanf("%d", &(*alumnos)[*n_alumnos].matricula);
  printf("Ingrese el promedio del alumno: \n");
  scanf("%f", &(*alumnos)[*n_alumnos].promedio);
  (*n_alumnos)++;

  int res;  
  printf("¿Desea ingresar otro registro? (1 = si, 0 = no): \n");
  scanf("%d", &res);
  if (res) {
    grabar_dato(alumnos, n_alumnos);
  }
}

void imprimir_alumnos(alumno *alumnos, int n_alumnos) {
  printf("\n\nAlumnos:\n\n");
  printf("Cantidad de alumnos: %d\n", n_alumnos);
  for (int i = 0; i < n_alumnos; i++) {
    printf("--------------------\n");
    printf("Nombre: %s\n", alumnos[i].nombre);
    printf("Apellido: %s\n", alumnos[i].apellido);
    printf("Edad: %d\n", alumnos[i].edad);
    printf("Matricula: %d\n", alumnos[i].matricula);
    printf("Promedio: %.2f\n", alumnos[i].promedio);
    printf("--------------------\n");
  }

  printf("\n");
}

int main() {
  int opcion = 0;
  int n_alumnos = 0;
  alumno *alumnos = NULL;

  // leemos los datos del archivo para cargarlos en memoria y evitar perderlos
  leer_disco(&alumnos, &n_alumnos);

  while (opcion != 3) {
    printf("1. Leer disco\n");
    printf("2. Grabar dato\n");
    printf("3. Salir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);
    switch (opcion) {
      case 1:
        imprimir_alumnos(alumnos, n_alumnos);
        break;
      case 2:
        grabar_dato(&alumnos, &n_alumnos);
        break;
      case 3:
        break;
      default:
        printf("Opcion invalida\n");
    }
  }

  grabar_disco(alumnos, n_alumnos);
  // Para prevenir segmentation fault por liberar memoria no asignada
  if (alumnos != NULL) {
    free(alumnos);
  }

  return 0;
}
