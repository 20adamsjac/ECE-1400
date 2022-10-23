/*************************************************
* Function Title: Polynomial
*
* Summary: Finds the highest and lowest integers of a given set
*
*Inputs: double x
*Outputs: double value of polynomial
**************************************************
* Pseudocode:
* BEGIN
* define variable
* calculate polynomial
* return value
* End
*************************************************/
#include <stdio.h>
#include <math.h>

double Polynomial (double x) { //BEGIN
    //define variable
    double p;
    //calculate polynomial
    p=(2*pow(x,5)+3*pow(x,4)-pow(x,3)-5*pow(x,2)+6*x-7);
    //return value
    return p;
}   //END

/*************************************************
* Function Title: main
*
* Summary: Displays the polynomial for a given value of x
*
*Inputs: None
*Outputs: None
*
* Compile instructions: Visual Studios
**************************************************
* Pseudocode:
* BEGIN
* define variables
* print opening prompt
* scan for variables
* print result
* END
*************************************************/

int main() { //BEGIN
    //define variables
    double x;
    //print opening prompt
    printf_s("This program calculates the following polynomial:\n"
           "2x^5 + 3x^4 - x^3 - 5x^2 + 6x - 7\n"
           "Please enter a value for x: ");
    //scan for variables
    scanf_s("%lf", &x);
    //print result
    printf_s("Result: %lf\n", Polynomial(x));

    return 0;
}   //END
