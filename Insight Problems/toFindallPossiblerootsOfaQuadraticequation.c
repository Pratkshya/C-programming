//Find all the possible roots of a quadratic equation

#include <stdio.h>
#include <math.h>

void main()
{
  float a,b,c,d,root1,root2,real,img;
  printf("Enter the cofficient of a,b and c: ");
  scanf("%f %f %f", &a,&b,&c);
  d = b*b - 4*a*c;

  if(d == 0)
  {
    printf("\nRoots are real and equal.");
    printf("\nThe roots are: ");
    root1 = (-b/(2*a));
    root2 = root1;
    printf("\nRoot1: %f",root1);
    printf("\nRoot2: %f",root2);
  }
  else if(d<0)
  {
    printf("\nThe roots are complex.");
    printf("\nThe roots are: ");
    real = (-b/(2*a));
    img = (sqrt(-d)/(2*a));
    printf("\nRoot1: %f + i %f",real,img);
    printf("\nRoot2: %f - i %f",real,img);
  }
  else
  {
    printf("\nRoots are real and distant.");
    printf("\nThe roots are: ");
    root1 = (-b+sqrt(d))/(2*a);
    root2 = (-b-sqrt(d))/(2*a);
    printf("\nRoot1: %f",root1);
    printf("\nRoot2: %f",root2);
  }
}