#include <stdio.h>
//#include <stdlib.h>

int main() {
  float num1, num2;
  printf("Enter the numerator: ");
  scanf("%f", &num1);
  printf("Enter the denominator: ");
  scanf("%f", &num2);
  if(num2==0){
    printf("Division by zero is not allowed.\n");
  }

  float result;
  result = num1/num2;

  printf("Result of division: %.2f\n", result);

  return 0;
}