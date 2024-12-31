#include <stdio.h>
void main()
{
  int a,b,min,i,result;
  printf("Enter any two numbers: ");
  scanf("%d %d", &a,&b);
  min = (a<b)?a:b;
  for(i=min; i>=1; i--)
  {
    if(a%i == 0 && b%i ==0)
    {
      result = i;
      break;
    }
  }
  printf("HCF of the numbers is: %d", result);
  printf("\n");
}