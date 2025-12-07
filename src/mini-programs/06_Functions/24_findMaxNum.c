/**
 * ----------------------------------------------------------
 * Program : 24_findMaxNum.c
 * Purpose : Find the maximum number among four numbers using functions
 * Author(s) : [Yazdaan, Uday]
 * Date : Nov 24, 2025
 * ----------------------------------------------------------
 */

#include <stdio.h>

// Function Declarations
int firstMax(int a, int b);
int secondMax(int c, int d);


int main() {
    int a,b,c,d; // 4 variables to get 4 inputs from the user
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int a1 = firstMax(a,b); // 'a1'stores the maximum of first two numbers
    int a2 = secondMax(c,d); // 'a2' stores the maximum of last two numbers

    if (a1 > a2) { // We compare a1 and a2 to find the maximum number out of the 4 numbers
        printf("%d", a1); // If a1 is greater than a2, value of a1 will get printed
    } else {
        printf("%d", a2); // Else value of a2 is printed
    }

    return 0;
}


// ------=>> | FUNCTION DEFINITIONS | <<=------
int firstMax (int a, int b) { // To find maximum of first two numbers
    int res = (a > b) ? a : b;
    return res;
}
    
int secondMax (int c, int d) { // To find maximum of last two numbers
    int res = (c > d) ? c : d;
    return res;
}


/*---------------------------- NOTE -------------------------------*/

// In the code line 21 (int a1 = firstMax(a, b);) we're calling function 'firstMax()' and passing two arguments 'a' and 'b' to it.
// Similarly in line 22 (int a2 = secondMax(c, d);) we're calling function 'secondMax()' and passing two arguments 'c' and 'd' to it.
// The functions 'firstMax()' and 'secondMax()' then processes these arguments and return the maximum values which are stored in 'a1' and 'a2' respectively.
// Finally in line 24 we compare 'a1' and 'a2' to find the overall maximum among the four input numbers and print it.

// Traditionally, we could've used normal if-else conditions inside "firstMax()" and "secondMax()" functions...
// But here, we've used ternary operation to reduce the number of lines used for code.
// Ternary operator (or Conditional operator) use "?" and ":" (question mark and colon symbol) to define condition in one line.
// Everything before "?" is the condition part, everything between "?" and ":" is the execution part if the condition is true...
// If the condition is false, everything after the ":" gets executed
// This is how easy it is to apply conditional code in a single line using Ternary Operator.

/*----------------------- END OF THE NOTE --------------------------*/