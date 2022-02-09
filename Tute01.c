/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
float mark1, mark2;  //variables declaration
float avg;

printf("Enter the mark 1 :"); //prompt
scanf("%f", &mark1);         //read mark 1

printf("Enter the mark 2 :");//prompt
scanf("%f", &mark2);        //read mark 1

avg = (mark1 + mark2)/ 2.0; //calculate the avg

printf("The average is %.2f", avg); //display avg
  
  return 0;
}

