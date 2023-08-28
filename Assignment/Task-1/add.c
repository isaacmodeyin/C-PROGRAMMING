// 1. C program to Add two Integers 
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Prompt user for the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the sum of the two integers
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %d\n", sum);

    return 0;
}
