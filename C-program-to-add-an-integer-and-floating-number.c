#include <stdio.h>
int main() {
    int number1;
    float number2, sum;
    printf("Enter an integer: ");
    scanf("%d", &number1);
    printf("Enter a floating-point number: ");
    scanf("%f", &number2);
    // calculate the sum
    sum = number1 + number2;
    printf("%d + %f = %f", number1, number2, sum);
    return 0;
}
