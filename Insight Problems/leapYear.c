//WAP to find whether a year is leap or not.

#include <stdio.h>
void main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  if(year%100 !=0 && year%4 == 0)
  {
    printf("The entered year %d is a leap year.", year);
  }
  else if (year%400 == 0)
  {
    printf("The entered year %d is a leap year.", year);
  }
  else
  {
    printf("The entered year %d isn't a leap year.", year);
  }
}
