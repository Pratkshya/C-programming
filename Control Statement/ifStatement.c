#include <stdio.h>
void main()
{
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a < 5){
    printf("Your entered number %d is less than 5", a);
  }
}