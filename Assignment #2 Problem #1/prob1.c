/*
A program that calculates and prints the Fibonacci number
of a user specified rank. For example if the user enters the rank = 9
the program prints in a new line The Fibonacci number at rank 9 is 21.

By Roger French
Assignment #2 Problem #1
*/
#include <stdio.h>
#include <stdlib.h>

int getFibByRank(int rank);

// Main function
int main()
{
  //Local Declarations
  // Integer representing the rank of a Fibonacci number
  int rank = 0;                                                                   
  // Tests
  printf("testing\n");
  if(getFibByRank(9) != 21 || getFibByRank(1) != 0 || getFibByRank(2) != 1 || getFibByRank(5) != 3)
  {
    printf("Fibonacci FAIL\n");
    printf("Somethings wrong with the Fibonacci algorithm.\n");
    exit(0);
  }
  else
    printf("All systems go! :)\n\n");

  while(1)
  {
    //Local Statements
    // Displays:"Enter the rank of the Fibonacci number you would like to see: "
    printf("\nEnter the rank of the Fibonacci number you would like to see (enter 0 to quit): "); 
    // Gets integer from key board and stores it in "Rank"
    scanf("\n%d", &rank);                                                       
    printf("\n");
    if(rank == 0)
      break;
    int fibNum = getFibByRank(rank);
    // Line space
    printf("\n");                                                               
    // Displays:"The Fibonacci number for rank ___ is ___."
    printf("\nThe Fibonacci number for rank %d is %d.\n", rank, fibNum);          
  }
  return 0;
}

// Returns Fibonacci number given position of the number in the sequence.
int getFibByRank(int rank)
{
  // Integer set as 1
  int first = 1;                                                              
  // Integer set as 1
  int second = 1;                                                             
  // Integer representing Fibonacci number
  int fibNum;                                                                 
  int n;                                                                      

  if(rank == 1)
    fibNum = 0;
  else if(rank < 4)
    fibNum = 1;
  else
  {
    // For Loop: setting n = 0 to count up to the rank number
    for (n = 4; n <= rank; n++)
    {
      /* Local Statements: 
       * Fibonacci number is set to be the value of the first number plus the second number 
       * First number is set to be the value of the second number 
       * Second number is set to be the value of the Fibonacci number 
       */
      fibNum = first + second;
      first  = second;
      second = fibNum;
      /* printf("\nfirst=%d second=%d third=%d", first, second, fibNum); */
    }// For Loop
  }
  return fibNum;
}
