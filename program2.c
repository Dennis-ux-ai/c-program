#include <stdio.h>

int main()
{
  int a, b,sum,average;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);
  sum = a + b;
  average = sum / 2;
  printf("sum = %d\n", sum);
  printf("average = %d\n", average);
  return 0;
}
