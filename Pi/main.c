/*************************************************
* Function Title: main
*
* Summary: Approximates pi to a given degree of certainty
*
*Inputs: None
*Outputs: None
*
* Compile instructions:   gcc main.c -o main.exe
**************************************************
* Pseudocode
*
* Begin
* define variables
* print prompt
* scan for n
*   if (n>0)
*       for loop
*           if (j is even)
*               use positive function
*           else
*               use negative function
*           endif
*       endloop
*       print result
*   else
*       print error message
*   endif
* End
*************************************************/

#include <stdio.h>

int main() {                                            //Begin
    float p, i;                                         //define variables
    int j, n;

    printf ("Enter an integer n. The value of pi "      //print prompt
            "will be calculated using n terms of an\n"
            "infinite series n: ");

    scanf ("%d", &n);                                   //scan for n

    p=0;
    if (n>=0) {                                         //if (n>0)
        for (i = 1, j = 0; n>j ; i+=2, ++j ) {          //for loop
            if ((j%2)==0) {                             //if (j is even)
                p+= (4/i);                              //use positive function
            }
            else {                                      //else
                p+= ((4/i)*(-1));                       //use negative function
            }                                           //endif
        }                                               //end loop
        printf ("The approximation of pi "              //print result
                "using %d terms is %f\n", n, p);          
    }
    else {                                              //else
       printf ("That value for n is invalid.");         //print error message
    }                                                   //endif
    return 0;
}                                                       //End
