// Write a program to print the average of 3 number,
#include <stdio.h>

  int main() {
    int num1, num2, num3;
    int average;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average of the three numbers is: %d\n", average);

    return 0;
  }
