#include <stdio.h>
int add(int,int);
int main()
{
  int result = add(2,3);
  printf("The sum of the numbers is: %d", result);
  return 0;
}
int add(int a, int b)
{
  return a+b;
}