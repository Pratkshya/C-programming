// Write a program to calculate the sum and difference of any two integers. You have to call two separate functions for sum and difference and display the result from the calling function.

#include <stdio.h>
int sum(int, int);
int difference(int, int);
int main()
{
  int a,b,add, sub;
  printf("Enter any two numbers: ");
  scanf("%d %d", &a,&b);
  add = sum(a,b);
  sub = difference(a,b);
  printf("The sum is: %d", add);
  printf("\nThe difference is: %d\n", sub);
  return 0;
}
int sum(int x, int y)
{
  return x + y;
}
int difference( int f, int g)
{
  return f-g;
}