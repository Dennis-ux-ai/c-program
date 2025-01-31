#include <stdio.h>

int main()
{
  int a, b, add, sub, mul;
  float div;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  add = a + b;
  sub = a - b;
  mul = a * b;
  div = (float)a / b; // Cast to float for correct division
  printf("Addition of two numbers is %d\n", add);
  printf("Subtraction of two numbers is %d\n", sub);
  printf("Multiplication of two numbers is %d\n", mul);
  printf("Division of two numbers is %f\n", div);
  return 0;
}
