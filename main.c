#include <stdio.h>
int main(void)
{
  float a, b;
  printf("Enter A : ");
  scanf("%f", &a);
  printf("Enter B : ");
  scanf("%f", &b);
  printf("%0.2f * %0.2f = %0.2f", a, b, a*b);
  return 0;
}

