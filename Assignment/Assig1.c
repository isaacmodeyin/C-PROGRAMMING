
// NO1. ADD TWO INTEGERS:
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


// NO2. ADD TWO FLOATING POINT NUMBERS:
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


// N03. ADD A FLOATING-POINT NUMBER AND AN INTEGER:
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

