// C Program to print the day using switch

#include <stdio.h>

int main()
{
    int day ;
    printf("Enter a numeric day number: ");
    scanf("%d", &day);

    printf("The day with number %d is ", day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}