#include <stdio.h>
void message(); //called function
int main()
{
  message(); //function call
  return 0;
}
void message() //called function
{
  printf("Hello World!");
}