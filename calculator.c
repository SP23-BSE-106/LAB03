/**
 * Author:Munazza Javed
 * Date: 21/10/23
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("%f", a + b);
  } else if(choice == 2) {
    result = a - b;
    printf("%f", result);
  } else if(choice == 3) {
    //TODO: handle this case (multiplication)
    result = a*b;
    printf("%f", result);
  } else if(choice == 4) {
    //TODO: handle this case (division)
    result = a / b;
     printf("%f", result);
  } else if(choice == 5) {
    //TODO: handle this case (minimum)
 result=(a < b) ? a : b;
     printf("%f", result);

  } else if(choice == 6) {
    //TODO: handle this case (log_a(b))
  result=log(b)/log(a);
  printf("%f", result);
 
  } else {
    printf("Please input a valid operator next time");
  }

  return 0;
}

/*
OUTPUT

PS D:\LABWORK\CSCE155-C-Lab03> .\a.exe
Enter operand a: 48
Enter operand b: 2
Enter operation:  
(1) Addition      
(2) Subtraction   
(3) Multiplication
(4) Division      
(5) Minimum       
(6) log_a(b)      
5
2.000000
*/
