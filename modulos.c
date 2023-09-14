/* // C program to check if a number is Even or an Odd number
#include <stdio.h>

int main() {
    int n;
    printf("Provide any integer number \n");
    scanf( "%d", &n);
    // condition to check for even number
    if ( (n % 2) == 0)
    {
        printf("The number is Even number %d ", n);
    }
    else
        printf("The number is an Odd number %d ", n);

        return 0;
} */

/* // C Program to check wether the person is eligible to vote or not
#include <stdio.h>
int main()
{
    int age;
    printf("Please provide your age: ");
    scanf("%d", &age);
    if (age > 17)
    {
        printf("You are eligible to vote \n");
    }
    else
        printf("You are not eligible to vote");

        return 0;
} */

// C Program to Demonstrate returning of month based numeric value using the switch statement
#include <stdio.h>

int main()
{
int month;
printf("Enter a numeric month number: ");
scanf("%d", &month);

switch (month)
{
    case 1:
        printf("You are in JANUARY");
        break;
    case 2:
        printf("You are in FEBRUARY");
        break;
    case 3:
        printf("You are in MARCH");
        break;
    case 4:
        printf("You are in APRIL");
        break;
    case 5:
        printf("You are in MAY");
        break;
    case 6:
        printf("You are in JUNE");
        break;
    case 7:
        printf("You are in JULY");
        break;
    case 8:
        printf("You are in AUGUST");
        break;
    case 9:
        printf("You are in SEPTEMBER");
        break;
    case 10:
        printf("You are in OCTOMBER");
        break;
    case 11:
        printf("You are in NOVEMBER");
        break;
    case 12:
        printf("You are in DECEMBER");
        break;
    default:
    printf("You are wrong");
}
    return 0;
}
 
// C Program to Demonstrate returning of month based numeric value using the if else statement
#include <stdio.h>

int main()
{
    int month;
    printf("Supply a Numeric Value: ");
    scanf("%d", &month);

    if (month == 1)
        printf("You are in JANUARY");
    else if (month == 2)
        printf("You are in FEBRUARY");
    else if (month == 3)
        printf("You are in MARCH");
    else if (month == 4)
        printf("You are in APRIL");
    else if (month == 5)
        printf("You are in MAY");
    else if (month == 6)
        printf("You are in JUNE");
    else if (month == 7)
        printf("You are in JULY");
    else if (month == 8)
        printf("You are in AUGUST");
    else if (month == 9)
        printf("You are SEPTEMBER");
    else if (month == 10)
        printf("You are in OCTOMBER");
    else if (month == 11)
        printf("You are in NOVEMBER");
    else if (month == 12)
        printf("You are in DECEMBER");

    else
        printf("You have supplied a wrong value ");

    return 0;
}
