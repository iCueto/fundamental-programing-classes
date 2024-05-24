#include <stdio.h>
#include <stdlib.h>

int main()
{
  float p, s, r;

  printf("/n Ingrese las ventas de los 3 valores");
  scanf("%f %f %f", &p, &s, &r);

  if (p > s)
  {
    if (p > r)
    {
      if (s > r)
      {
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", p, s, r);
      }
      else
      {
        printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", p, r, s);
      }
    }
    else
    {
      printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", r, p, s);
    }
  }
  else
  {
    if (s > r)
    {
      if (p > r)
      {
        printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", s, p, r);
      }
      else
      {
        printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", s, r, p);
      }
    }
    else
    {
      printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", r, s, p);
    }
  }
}