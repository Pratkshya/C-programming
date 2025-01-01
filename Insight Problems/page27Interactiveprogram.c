//WAP that reads positive numbers untill user enters "no" and then sum the numbers divisible by 4 that lie between the range of 10 and 50 and finally display the count and the average value.

#include <stdio.h>
#include <string.h>
void main()
{
  char ch[10];
  int  n, sum = 0, count = 0;
  float average;
  do
  {
    printf("Enter the number: ");
    scanf("%d", &n);
    if ( n>10 && n<50 && n%4 == 0)
    {
      sum = sum+n;
      count ++;
    }
    printf("Do you want to enter another number? [yes/no]: ");
    scanf("%s", ch);

  } while (strcmp(ch,"no") != 0);
  average = (float)sum/count;
  printf("Count: %d", count);
  printf("\nAverage: %f", average);
  printf("\n");
}