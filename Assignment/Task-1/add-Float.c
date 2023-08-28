// 2. C program to Add two Floating point numbers 
#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Prompt user for the first floating-point number
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    // Prompt user for the second floating-point number
    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    // Calculate the sum of the two floating-point numbers
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %f\n", sum);

    return 0;
}
