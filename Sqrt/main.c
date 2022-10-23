/*************************************************
 * Function Title: main.c
 *
 * Summary: Approximates the square root of a given number
 *
 * Inputs: None
 * Outputs: None
 *
 * Compile instructions: gcc main.c -o main.exe
**************************************************
 * Begin
 * define variables
 * print prompt
 * scan for variable
 * if (x>0)
 *      while loop
 *          set y to new value
 *      endloop
 *      print root
 * else
 *      print error
 * endif
 * End
*************************************************/
#include <stdio.h>
#include <math.h>

int main() {                                                //Begin

    int x;                                                  //define variables
    double y;
    y=1;

    printf("Enter a positive number: ");                    //print prompt

    scanf("%d", &x);                                        //scan for variable

    if (x>0) {                                              //if (x>0)

        while (fabs((((x / y) + y) / 2) - y) > 0.00001) {   //while loop
            y = (((x / y) + y) / 2);                        //set y to new value
        }                                                   //endloop

        printf("Square root: %.5lf\n", y);                  //print root
    }
    else {                                                  //else
        printf("That value is invalid\n");                  //print error
    }                                                       //endif
}                                                           //End
