#include <stdio.h>
void main()
{
  char str[20];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("You entered: ");
  puts(str);
  printf("\n");
}
