// C Program to demonstrate the formatting methods.
#include <stdio.h>
int main (){
    char str[] = "Programming Students";
    printf("%s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n, str");
    return 0;
} 

/* 
what does this line of code does 
printf("%20s\n", str);

The line of code printf("%20s\n", str); prints the string stored in the variable str to the console. The %20s format specifier tells the printf() function to print the string with a minimum field width of 20 characters. If the string is less than 20 characters long, then the printf() function will pad the string with spaces on the right side to make it 20 characters long. The \n character at the end of the format specifier tells the printf() function to print a newline character after the string.

Here is an example of how this code would work:

C
char str[] = "This is a string";

printf("%20s\n", str);
Use code with caution. Learn more
This code would print the following to the console:

     This is a string
The string "This is a string" is 12 characters long, so the printf() function pads it with 8 spaces on the right side to make it 20 characters long. The newline character at the end of the string causes the cursor to move to the beginning of the next line on the console.

I hope this explanation is helpful! Let me know if you have any other questions.



*/