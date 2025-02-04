#include<stdio.h>
void main()
{ 
  int num1, num2, temp;
  num1 = 6;
  num2 = 9;
  
  temp = num1;
  num1 = num2;
  num2 = temp;
  
  printf("num1 = %d, num2 = %d", num1, num2);
}
