#include <stdio.h>
int main()
{
  int i, mul = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Factorial of %d is = ", n);
  for (i = 1; i <= n; i++)
  {
    mul = mul * i;
    printf(" %d *", i);
  }
  printf("= %d ", mul);
  return 0;
}