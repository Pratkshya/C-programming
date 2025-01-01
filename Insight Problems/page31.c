//WAP to read the number until -1 is encountered. Also count the number even or odd numbers entered by the user.
#include <stdio.h>
void main()
{
  int num, evenCounter = 0, oddCounter = 0;
  printf("To terminate the program: Enter -1");
  printf("\nEnter any number: ");
  scanf("%d", &num);
  while(num != -1)
  {
     if(num%2 == 0)
     {
      evenCounter++;
     }
     else
     {
      oddCounter++;
     }
     printf("Enter the next number: ");
     scanf("%d", &num);
  }
  printf("Even count: %d", evenCounter);
  printf("\nOdd counter: %d", oddCounter);
  printf("\n");
}