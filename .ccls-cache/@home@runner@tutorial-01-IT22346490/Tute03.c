/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {//main function begins
  //variables
  int num,sum=0,i;

  printf("Enter a number:"); // input the number
  scanf("%d",&num);

  for(i=1; i<=num; i++)
    {
      sum = sum + i; //calculate the sum of the numbers
    }

  printf("Sum:%d",sum); // displaying sum

 return 0;
}// end of main function

