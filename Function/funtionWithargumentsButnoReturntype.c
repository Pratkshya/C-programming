#include <stdio.h>
void add(int , int);
int main()
{
  int num1 = 2, num2 = 3;
  add(num1,num2);
  return 0;
}
void add(int a, int b)
{
  int sum = a+b;
  printf("The sum of the numbers is: %d", sum);
}