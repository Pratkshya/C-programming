//WAP to read two integers n1 and n2 where n1<n2. Display all even numbers between these two numbers. Also, count the frequency of these even numbers.

#include <stdio.h>
void main()
{
  int n1, n2, evenCounter=0, evenNum, i;
  printf("Enter any two numbers: ");
  scanf("%d %d", &n1, &n2);
  printf("\nEven numbers are: ");
  if(n1<n2)
  {
    for(i=n1; i<=n2;i++)
    {
      if(i%2 == 0)
      {
        evenCounter++;
        printf("\n%d",i);
        evenNum = i;
      }
    }
    printf("\nThe count of even numbers is: %d\n", evenCounter);
  }
  else
  {
    printf("\nEnter numbers such that num1 < num2.");
  }
}