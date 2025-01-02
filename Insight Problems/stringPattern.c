//Using unformatted I/O function.
#include <stdio.h>
void main()
{
  int i,j,k;
  char s[] = "NEPAL";
  for(i=0;i<5;i++)
  {
    for(j=0;j<5-i;j++)
    {
      putchar(' ');
    }
    for(k=0;k<2*i+1;k++)
    {
      if(i%2==0)
      {
        putchar(s[i]);
      }
      else
      {
        putchar(s[i] + 32);
      }
    }
    putchar('\n');
  }
}