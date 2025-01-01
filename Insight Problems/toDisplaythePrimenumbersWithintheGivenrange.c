//WAP to display the prime numbers within the given range.

#include <stdio.h>
 void main()
 {
  int range1, range2, i,n, counter;
  printf("Enter the rage (.. t0 ..): ");
  scanf("%d %d", &range1, &range2);
  for(n = range1; n<=range2; n++)
  {
    counter = 0;
    for(i = 1; i<=n; i++)
    {
      if(n%i == 0)
      {
        counter++;
      }
    }
    if (counter == 2)
    {
      printf("%d",n);
      printf("\n");
    }
 }
}