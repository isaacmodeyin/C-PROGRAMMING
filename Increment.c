/* // 1. Post-increment (`i++`) : this operator increases the value of a variable by 1 after the current value is used in an expression.
// Example:
int i = 5;
int result = i++;
// Now i = 6, and result = 5

// 2. Pre-increment(`++i`) : This operator increases the value of a variable by 1 before the current value is used in an expression.
//Example:
int i = 5;
int result = ++i;
// Now i = 6, and result = 6

// 3. Increment by a Constant(`+=`): You can increment a variable by a constant value using the `+=` operator.
//Example:
int i = 5;
i += 3; // Equivalent to i = i + 3
// Now i = 8

// 4. Increment by an Arbitrary Value: You can increment a variable by any value using the arithmetic addition operator(`+`) .
//Example:
int i = 5;
int incrementValue = 7;
i = i + incrementValue;
// Now i = 12
 */

// Online C compiler to run C program online
// #include <stdio.h>

// float num1, num2, num3, num4;
// int main()
// {
//     // Write C code here
//     printf("Supply your first value \n");
//     scanf("%f", &num1);
//     num2 = ++num1;
//     num3 = num1++;
//     num4 = num1;
//     printf("Your first answer is: %f \n ", num2);
//     printf("Your second answer is: %f \n ", num3);
//     printf("Your third answer is: %f \n ", num4);
//     return 0;
// }

//--------------------------------------------
#include <stdio.h>
float n1, n2, n3, n4;

int main()
{
    printf("Enter you number here:\n");
    scanf("%f", &n1);
    n2 = n1;
    n3 = ++n1;
    n4 = n1++;
    printf("first is: %f \n", n1);
    printf("Second is: %f \n", n3);
    printf("third is: %f \n", n4);
    return 0;
}