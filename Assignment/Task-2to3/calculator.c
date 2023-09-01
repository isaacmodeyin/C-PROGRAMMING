#include <stdio.h>
// C Program to Create a Simple Calculator
int main() {
    double num1, num2;
    char operator;

    // Prompt the user to enter two numbers and an operator
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to consume the newline character

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the calculation based on the operator using if statements
    if (operator == '+') {
        printf("Result: %.2lf\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %.2lf\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %.2lf\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2lf\n", num1 / num2);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator. Please enter +, -, *, or /.\n");
    }

    return 0;
}
