//Triangular numbers like 1+2+3+4..... i.e 3,6,10,15
#include <stdio.h>
void main()
{
  int num,sum=0,i;
  printf("Enter any number: ");
  scanf("%d", &num);
  for(i=1; i<=num; i++)
  {
    sum += i;
    if(sum == num)
    {
      printf("The number %d is a triangular number.",num);
      break;
    }
    if(sum>num)
    {
      printf("The number %d is not a triangular number.", num);
      break;
    }
  }
}