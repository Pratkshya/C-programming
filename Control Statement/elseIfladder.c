//Largest number among three numbers

#include <stdio.h>
void main()
{
  int a,b,c;
  printf("Enter any three numbers: ");
  scanf("%d %d %d", &a,&b,&c);
  if(a>b && a >c)
    printf("a is largest number");
    else if(b>a && b>c)  
    printf("b is the largest");
      else
      printf("c is the largest");
}