#include <stdio.h>
int area(); //function declaration
int main()
{
   int result;
   result = area(); //function call
   printf("\nArea of the square is: %d", result);
   return 0;
}
int area()
{
  int squareArea, side;
  printf("Enter the side of a square: ");
  scanf("%d", &side);
  squareArea = side*side;
  return squareArea;  //returns a value
}