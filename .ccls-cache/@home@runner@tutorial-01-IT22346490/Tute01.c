/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>


int main() { // Main function begins
  // Variables
  int mark1, mark2, sum;
  float avg;

  printf("Input mark of first subject:");
  // Inputing mark1
  scanf("%d", &mark1);

  printf("Input mark of second subject:"); // Inputing mark2
  scanf("%d", &mark2);

  sum = mark1 + mark2; // Finding sum

  avg = sum / 2; // Finding average

  printf("Average:%.2f", avg); // Displaying average

  return 0;
} // End of main function
