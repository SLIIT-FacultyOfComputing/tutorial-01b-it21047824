/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int num, sum=0, i;

  //user input
  printf("Enter a positive number : ");
  scanf("%d", &num);

  //calculation
  for(i = 1; i <= num; i++)
  {
    sum += i;
  }

  //display results
  printf("Result = %d", sum);

  return 0;
}

