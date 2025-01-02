//WAP to swap the numbers using pass by value

#include <stdio.h>
void swap(int, int);
int main()
{
  int x = 4, y = 9;
  printf("Before swap: x = %d y = %d", x,y);
  swap(x,y);
  printf("\nAfter swap: x = %d y = %d", x,y);
}
void swap(int a, int b)
{
  int c;
  c = a;
  a = b;
  b = c;
  printf("\nSwapped numbers are: x = %d y = %d\n", a,b);
}