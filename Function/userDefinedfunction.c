#include <stdio.h>
int add(int a, int b); //Function declaration
int main()
{
  int result;
  result = add(3,2); //Function call
  printf("The sum is: %d", result);
  return 0;
}
int add(int a,int b) //Function defination
{
  return a+b;
}