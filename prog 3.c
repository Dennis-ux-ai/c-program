#include<stdio.h>
void main()
{
  int a, b, c, sum, avg;
  printf("Enter 3 numbers");
  scanf("%d%d%d", &a, &b, &c);
  sum = a + b + c;
  avg =sum/3;
  printf("sum of 3 num is %d\n", sum);
  printf("average of 3 numbers is %d\n", avg);

   
}
