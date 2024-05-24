#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age > 0) {
    if (age < 6) {
      printf("You are a little kid\n");
    } else if (age < 12) {
      printf("You are a kid\n");
    } else if (age < 18) {
      printf("You are a teenager\n");
    } else if (age <= 60) {
      printf("You are an adult\n");
    } else if (age > 60 && age < 121) {
      printf("You are an elder\n");
    } else {
      printf("Are you a vampire?\n");
    }
  }

  return 0;
}