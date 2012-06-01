/*
A program that prompts a user for an integer value in the range 0 to 32,767
and then prints the individual digits of the numbers on a line with three spaces
between the digits. The first line is to start with the leftmost digit and print
all five digits; the second line is to start with the second digit from the left
and print four digits, and so forth. For example if the user enters 1234, your
program should print
0   1   2   3   4
1   2   3   4
2   3   4
3   4
4

Assignment #2 Problem #2
By Roger French
*/

#include <stdio.h>
#include <stdlib.h>

// Globle Declorations
void numOrder();
int number;

int main()
{
    // Local Declorations

    // Local Statments
    printf("\nEnter an integer in the range of 0 to 32,767: ");
    scanf("\n%d", &number);

    numOrder();
    /* printf("\n%d", numOrder()); */

    return 0;

}// main

void numOrder()
{
 // Local Declorations
    int five;
    int four;
    int three;
    int two;
    int one;

 // Local Statments
    five  = (number / 10000);
    four  = (number / 1000) % 10;
    three = (number / 100) % 10;
    two   = (number / 10) % 10;
    one   = (number % 10);

    printf("\n%d   %d   %d   %d   %d", five, four, three, two, one);
    printf("\n%d   %d   %d   %d", four, three, two, one);
    printf("\n%d   %d   %d", three, two, one);
    printf("\n%d   %d", two, one);
    printf("\n%d", one);
    printf("\n");

}// numOrder
