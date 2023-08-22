#include <stdio.h>

int main() {
    int number1, number2, product;
    printf("Enter two integers separated by Space: ");
    scanf("%d %d", &number1, &number2);
    // calculate the product
    product = number1 * number2;
    printf("%d * %d = %d", number1, number2, product);
    return 0;
}
