// C program to demonstrate while loop

// #include <stdio.h>
// int main()
// {
// // Initialization of loop variable
//         int i = 0;
//  // setting test expression as (i < 5), means the loop
// // will execute till i is less than 5
//         while (i < 5)

//     {
//      // loop statements
//             printf(" God is Good and I know it \n");
//         // updating the loop variable
//             i++;
//     }
//     return 0;
// }
// Another example

// #include<stdio.h>
//  int main()

// {
//  int i=1;
//  while(i<=10)
// {
//  printf("%d \n",i);
//  i++;
// }
//  return 0;
// }

#include<stdio.h>
 int main()
{
 int i=1,number=0,b=9;

 printf("Enter a number: ");
 scanf("%d",&number);

 while(i<=10)
{
 printf("%d \n",(number*i));
 i++;

}
 return 0;
 }

