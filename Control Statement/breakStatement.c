#include <stdio.h>
void main()
{
  int n;
  do
  {
    printf("\nEnter any number: ");
    scanf("%d", &n);
    if (n == 0)
        break;
    printf("%d", n);
  } while (1); //1 makes it an infinte loop so break is necessary
  
}