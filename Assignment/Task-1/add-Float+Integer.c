// 3. C program to Add a floating-point number & an Integer
#include <stdio.h>

int main() {
    float num1;
    int num2;
    float sum;

    // Prompt user for a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &num1);

    // Prompt user for an integer
    printf("Enter an integer: ");
    scanf("%d", &num2);

    // Calculate the sum of the floating-point number and the integer
    sum = num1 + num2;

    // Display the sum
    printf("Sum: %f\n", sum);

    return 0;
}
 