#include<stdio.h>

int main()
{
  int a = 545;
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char c = 'd';
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));

  unsigned int d = 23;
  printf("unsigned int d value: %d and size: %lu bytes\n", d, sizeof(d));

  unsigned short us = 3;
  printf("unsinged short us value: %d and size: %lu bytes\n", us, sizeof(us));
}

