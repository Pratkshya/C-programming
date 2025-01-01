//WAP that calculates the sum of the digits entered by  the user successively until the sum reduces to a single digit number.

#include <stdio.h>
void main()
{
  int num,rem,sum;
  printf("Enter the number: ");
  scanf("%d", &num);
  do
  {
    sum = 0;
    do
    {
      rem = num%10;
      sum = sum + rem;
      num = num/10;
    } while (num != 0);
    num = sum;
  } while (sum/10 != 0);
  printf("Sum is: %d\n", sum);
}