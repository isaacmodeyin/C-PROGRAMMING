#include <stdio.h>

int main()
{
    // variable to be used in switch statement
    int var = 1;

    // declare switch cases
    switch (var)
    {
    case 1:
        printf("Case 1 is executed");
        break;
    case 2:
        printf("Case 2 is executed");
        break;
    default:
        printf("Default Case is executed");
        break;
        return 0;
    }
}

/* 
#include <stdio.h>

int main()
{
    // variable to be used in switch statement
    char var = 'b';
    printf("Enter a Character between a-d: ");
    scanf("%c",&var);
    // declare switch cases
    switch (var)
    {
    case 'a':
        printf("Case 'a' is executed");
        break;
    case 'b':
        printf("Case 'b' is executed");
        break;
    case 'c':
        printf("Case 'c' is executed");
        break;
    case 'd':
        printf("Case 'd' is executed");
        break;
    default:
        printf("Default Case is executed");
        break;
    }

    return 0;
} 
 */