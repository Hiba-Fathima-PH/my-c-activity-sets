//2. Write a C program to add two numbers.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two integers: ");
    
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

INPUT
14 25

OUTPUT
  The sum of 14 and 25 is: 39
