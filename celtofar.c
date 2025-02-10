#include <stdio.h>

int main() {
  float fahrenheit, celsius;

  // Input Celsius value from user
  printf("Enter temperature in Celsius: ");
  scanf("%f", &celsius);

  // Convert Celsius to Fahrenheit
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("Celsius: %.2f, Fahrenheit: %.2f\n", celsius, fahrenheit);

  // Input Fahrenheit value from user
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  // Convert Fahrenheit to Celsius
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("Fahrenheit: %.2f, Celsius: %.2f\n", fahrenheit, celsius);

  return 0;
}
