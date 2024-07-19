// Tic Tac Toe

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loop(char c[3][3]);
void intro_first(char c[3][3]);
void intro_me(char c[3][3]);
void tablet(char c[3][3]);
void intro_ia(char c[3][3]);
int winner(char c[3][3]);

int main()
{
  char c[3][3];

  loop(c); // LLama a todas las funciones fundamentales y hace un refresco de pantalla

  return 0;
}

void loop(char c[3][3])
{
  int i,j;

  i = 0;

  intro_first(c);

  do
  {
    system("clear"); // Esto está en Unix/Linux, en Windows es "cls"
    tablet(c);

    if (i % 2 == 0)
    {
      intro_me(c);
    }
    else
    {
      intro_ia(c);
    }
    j = winner(c);
    i++;

  } while (1 <= 9 && j == 2);

  system("clear"); // Esto está en Unix/Linux, en Windows es "cls"
  tablet(c);

  if (j == 0) {
    printf("Enhorabuena!! Has ganado\n\n");
  } else if (j == 1) {
    printf("Has perdido, pero no pasa nada\n\n");
  } else {
    printf("Empate!\n\n");
  }

}

void intro_first(char c[3][3])
{
  int i, j;
  char aux;

  aux = '1';

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      c[i][j] = aux++;
    }
  }
}

void intro_me(char c[3][3])
{
  int i, j, k;
  char aux;
  do
  {
    do
    {
      printf("\nColoca una ficha: ");
      fflush(stdin);
      scanf("%c", &aux);

    } while (aux < '1' || aux > '9');

    k = 0;

    switch (aux)
    {
    case '1':
      i = 0;
      j = 0;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '2':
      i = 0;
      j = 1;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '3':
      i = 0;
      j = 2;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '4':
      i = 1;
      j = 0;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '5':
      i = 1;
      j = 1;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '6':
      i = 1;
      j = 2;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '7':
      i = 2;
      j = 0;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '8':
      i = 2;
      j = 1;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;

    case '9':
      i = 2;
      j = 2;
      if (c[i][j] == 'X' || c[i][j] == 'O')
      {
        k = 1;
        printf("Casilla ocupada\n\n");
      }
      break;
    }

  } while (k == 1);

  c[i][j] = 'X';
}

void intro_ia(char c[3][3]) {
  int i, j, k;
  char aux;
  srand(time(NULL));

  do {
    i = rand() % 3;
    j = rand() % 3;
    k = 0;

    if (c[i][j] == 'X' || c[i][j] == 'O')
    {
      k = 1;
    }
  } while (k == 1);

  c[i][j] = 'O';

}

void tablet(char c[3][3])
{
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (j < 2)
      {
        printf(" %c |", c[i][j]);
      }
      else
      {
        printf(" %c ", c[i][j]);
      }
    }
    if (i < 2)
    {
      printf("\n-----------\n");
    }
  }
  printf("\n\n");
}

int winner(char c[3][3])
{
  if (c[0][0] == 'X' || c[0][0] == 'O')
  {
    if (c[0][0] == c[0][1] && c[0][0] == c[0][2])
    {
      if (c[0][0] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
    if (c[0][0] == c[1][0] && c[0][0] == c[2][0])
    {
      if (c[0][0] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
  }
  if (c[1][1] == 'X' || c[1][1] == 'O')
  {
    if (c[1][1] == c[0][0] && c[1][1] == c[2][2])
    {
      if (c[1][1] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
    if (c[1][1] == c[1][0] && c[1][1] == c[1][2])
    {
      if (c[1][1] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
    if (c[1][1] == c[2][0] && c[1][1] == c[0][2]) {
      if (c[1][1] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
    if (c[1][1] == c[0][1] && c[1][1] == c[2][1]) {
      if (c[1][1] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
  }
  if (c[2][2] == 'X' || c[2][2] == 'O')
  {
    if (c[2][2] == c[2][0] && c[2][2] == c[2][1])
    {
      if (c[2][2] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    } 
    if (c[2][2] == c[0][2] && c[2][2] == c[1][2]) {
      if (c[2][2] == 'X')
      {
        return 0; // 0 significa que el jugador ha ganado
      }
      else
      {
        return 1; // 0 significa que el jugador ha perdido
      }
    }
  }

  return 2;
}