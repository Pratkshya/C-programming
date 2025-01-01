//WAP to print the Fibonacci series until the term is less than 500

#include <stdio.h>
void main()
{
  int a=0,b=1,c;
  printf("%d\n",b);
  do
  {
    c = a + b;
    if(c>500)
    {
      break;
    }
    printf("%d\n", c);
    a = b;
    b = c;
  } while (1);
  
}
                             