#include <stdio.h>
int findHCF(int a, int b)
{
  while (b!=0)
  {
    int temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}
int main()
{
  int x, y, result;
  printf("Enter any two numbers: ");
  scanf("%d %d", &x, &y);
  result = findHCF(x,y);
  printf("The HCF of the number %d and %d is: %d\n", x,y,result);
  return 0;
}