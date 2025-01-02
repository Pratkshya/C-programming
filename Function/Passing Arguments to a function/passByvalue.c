#include <stdio.h>
void add(int a)
{
  a = 10;
  printf("\nInside the function call: %d", a);
}
int main()
{
  int b = 20;
  printf("\nBefore function call: %d", b);
  add(b);
  printf("\nAfter function call: %d\n", b);
  return 0;
}
