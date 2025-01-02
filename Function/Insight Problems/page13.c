//Write a function that takes an integer number of any digits and return the number reversed. In the calling function read a number pass it to the function and display the result.
#include <stdio.h>
int reverse(int x)
{
   int r,sum = 0;
   while(x != 0)
   {
     r = x%10;
     sum = sum*10 + r;
     x = x/10;
   }return sum;
}
int main()
{
  int n,result;
  printf("Enter a number: ");
  scanf("%d", &n);
  result = reverse(n);
  printf("The reversed number is: %d\n", result);
  return 0;
}
