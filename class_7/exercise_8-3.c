#include <stdio.h>
#include <string.h>

typedef struct {
  char calle[20];
  int numero;
  int cp;
  char localidad[20];
} domicilio;

struct empleado {
  char nombre[20];
  char departamento[20];
  float sueldo;
  domicilio direccion;
};

void Lectura(struct empleado *a) {
  printf("\nIngrese el nombre del empleado: ");
  gets(a->nombre);
  fflush(stdin);
  printf("\nIngrese el departamento del empleado: ");
  scanf("%s", a->departamento);
  printf("\nIngrese el sueldo del empleado: ");
  scanf("%f", &a->sueldo);
  fflush(stdin);
  printf("\n-- - Ingrese la direccion del empleado - --");
  printf("\n\tCalle: ");
  gets(a->direccion.calle);
  printf("\n\tNumero: ");
  scanf("%d", &a->direccion.numero);
  printf("\n\tCodigo Postal: ");
  scanf("%d", &a->direccion.cp);
  fflush(stdin);
  printf("\n\tLocalidad: ");
  gets(a->direccion.localidad);
}

void main(void)
{
  struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jerónimo", 120, 3490, "Toluca"};
  struct empleado *e1, *e2, e3, e4;

  e1 = &e0;

  printf("/nIngrese el nombre del empleado 1: ");
  scanf("%s", &(*e1).nombre);
  fflush(stdin);
  printf("\nIngrese el departamento de la empresa: ");
  gets(e1->departamento);
  printf("\nIngrese el sueldo del empleado 1: ");
  scanf("%f", &e1->sueldo);
  printf("\n-- - Ingrese la direccion del empleado - --");
  printf("\n\tCalle: ");
  fflush(stdin);
  gets(e1->direccion.calle);
  printf("\n\tNumero: ");
  scanf("%d", &e1->direccion.numero);
  printf("\n\tCodigo Postal: ");
  scanf("%d", &e1->direccion.cp);
  printf("\n\tLocalidad: ");
  fflush(stdin);
  gets(e1->direccion.localidad);

  printf("\nIngrese el nombre del empleado 3: ");
  scanf("%s", &e3.nombre);
  fflush(stdin);
  printf("\nIngrese el departamento de la empresa: ");
  gets(e3.departamento);
  printf("\nIngrese el sueldo del empleado 3: ");
  scanf("%f", &e3.sueldo);
  printf("\n-- - Ingrese la direccion del empleado - --");
  printf("\n\tCalle: ");
  fflush(stdin);
  gets(e3.direccion.calle);
  printf("\n\tNumero: ");
  scanf("%d", &e3.direccion.numero);
  printf("\n\tCodigo Postal: ");
  scanf("%d", &e3.direccion.cp);
  printf("\n\tLocalidad: ");
  fflush(stdin);
  gets(e3.direccion.localidad);

  e2 = &e4;
  Lectura(e2);

  Lectura(&e4);

  printf("\nDatos del empleado 1\n");
  printf("%s\t%s\t%2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento, e1->sueldo, e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

  printf("\nDatos del empleado 4\n");
  printf("%s\t%s\t%2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}
