#include <stdio.h>
void display(int *);
int main()
{
  int a = 10; //actual parameter
  printf("Before function call: a = %d", a);
  display(&a);
  printf("\nAfter functin call: a = %d\n", a);
  return 0;
}
void display(int *b)
{
  *b = 100;
  printf("\nInside the function: b = %d", *b);
}