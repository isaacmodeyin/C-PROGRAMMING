#include <stdio.h>
// C Program to Print the Day
int main() {
    int dayNumber;

    // Prompt the user to enter a day number (1-7)
    printf("Enter a day number (1-7): ");
    scanf("%d", &dayNumber);

    if (dayNumber >= 1 && dayNumber <= 7) {
        // Use if statements to determine the day based on the day number
        if (dayNumber == 1) {
            printf("Monday\n");
        } else if (dayNumber == 2) {
            printf("Tuesday\n");
        } else if (dayNumber == 3) {
            printf("Wednesday\n");
        } else if (dayNumber == 4) {
            printf("Thursday\n");
        } else if (dayNumber == 5) {
            printf("Friday\n");
        } else if (dayNumber == 6) {
            printf("Saturday\n");
        } else {
            printf("Sunday\n");
        }
    } else {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
