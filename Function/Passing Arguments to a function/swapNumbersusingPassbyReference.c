#include <stdio.h>
void swap(int *, int *);
int main()
{
  int x = 5, y = 1;
  printf("Before swap: x = %d y = %d", x,y);
  swap(&x, &y);
  printf("\nAfter swap: x = %d y = %d\n", x,y);
  return 0;
}
void swap(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
}