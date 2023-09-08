// A do…while loop in C is similar to the while loop except that the condition is always executed after the body of a loop.
// Syntax of Do-While Loop 
//  do {
//   statements
// } while (expression);

// See an example here 
#include<stdio.h>

int main()
{
 int num=1; //initializing the variable
 do
 {
  printf("%d\n",2*num);
  num++;  
 }

while(num<=10);
 return 0;
}

