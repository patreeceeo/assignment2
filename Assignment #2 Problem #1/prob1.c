/*
A program that calculates and prints the Fibonacci number
of a user specified rank. For example if the user enters the rank = 9
the program prints in a new line “The Fibonacci number at rank 9 is 21”.

By Roger French
Assignment #2 Problem #1
*/
#include <stdio.h>
#include <stdlib.h>

int main()                                                                      // Main function
{
    //Local Declorations
    int rank;                                                                   // Intiger representing the rank of a Fibonacci number
    int first = 0;                                                              // Intiger set as 0
    int second = 1;                                                             // Intiger set as 1
    int fibNum;                                                                 // Intiger representing Fibonacci number
    int n;                                                                      // Intiger

    //Local Statments
    printf("\nEnter the rank of the Fibonacci number you would like to see: "); // Displaies:"Enter the rank of the Fibonacci number you would like to see: "
    scanf("\n%d", &rank);                                                       // Gets intiger from key board and stores it in "Rank"
    printf("\n");
    if(rank < 2)
      printf("%d", rank);
    else
    {
    for (n = 2; n < rank; n++)                                                  // For Loop: setting n = 0 to count up to the rank number
    {
        //Local Statments

            fibNum = first + second;                                            // Fibonacci number is set to be the value of the first number and the second number
            first  = second;                                                    // First number is set to be the value of the second number
            second = fibNum;                                                    // Second number is set to be the calue of the Fibonacci number
    printf("\nfirst=%d second=%d third=%d", first, second, fibNum);
    }// For Loop

    printf("\nThe Fibonacci number for rank %d is %d.", rank, fibNum);          // Displaies:"The Fibonacci number for rank ___ is ___."
    printf("\n");                                                               // Line space

    }


    return 0;                                                                   // Nothing is returned
}// Main
