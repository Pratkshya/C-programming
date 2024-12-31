//WAP to print the following seris untill the term value less than 750. The series is 1,2,5,10,17,26,37,..........

#include <stdio.h>
void main()
{
  int i = 1, t = 1;
  while (i<750)
  {
    printf("%d\n",t);       
    t = t + (2*i - 1);
    i++;
  }
}