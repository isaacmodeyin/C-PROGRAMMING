// // Have a look at this simple for loop program for a better understanding:
// #include <stdio.h>

// int main() {
//   int i;
//   for (i = 6; i <= 5; i++)
//     printf("CSC 201 \n");
    
//   return 0;
// }


// Another example for loop to print 1 to 10
// #include<stdio.h>
// int main()
// {
//  int number;
//  for(number=1;number<=10;number++) //for loop to print 1-10 numbers
//  {
//   printf("%d\n",number);  //to print the number
//  }
//  return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int i=0;
// int max = 10;
// for (; i < max; i++)

// {
//   printf("%d\n", i);
// }
// return 0;
// }

#include <stdio.h>
 int main(){

 int i=1,number=0;

 printf("Enter a number:");
 scanf("%d",&number);

 for(i=1;i<=10;i++)
{
 printf("%d \n",  (number*i) );
 }

 return 0;
 }
