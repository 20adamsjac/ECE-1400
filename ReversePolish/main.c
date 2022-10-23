#include "math.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *Function Title: Main
 *
 * Summary: Gives the answer for equations in Reverse Polish Notation
 *
 * Inputs: None
 * Outputs: None
 ***********************
 * Pseudocode
 *
 * Begin
 * define variables
 * start loop
 *  initialize variables
 *  print prompt
 *  start loop
 *      if (array is full)
 *          overflow
 *      endif
 *      scan for variable
 *      if (not a digit)
 *          add 2 to n
 *      endif
 *      set old value equal to new value
 *      if (x is a digit)
 *          add to stack
 *          add to number of digits
 *          reset n
 *      else
 *          switch (x)
 *              case add:
 *                  add sum to stack
 *              case subtract:
 *                  add difference to stack
 *              case multiply:
 *                  add product to stack
 *              case divide:
 *                  add quotient to stack
 *          if (x == '=')
 *              if (more operators than digits)
 *                  underflow
 *              else
 *                  print total
 *                  reset array
 *                  break loop
 *              endif
 *      endif
 * End
 */

int main() {  //Begin
    //define variables
    char x=0, c=0;
    int n, operators, digits;
    //start loop
    for (;;)
    {
        //initialize variables
        n=0;
        operators=0;
        digits=0;
        //print prompt
        printf("Enter an RPN expression: ");
        //start loop
        for (;;)
        {
            //if (array is full)
            if (is_full())
            {
                //overflow
                stack_overflow();
            }//endif
            //scan for variable
            scanf("%c", &x);
            //if (not a digit)
            if (c>'9' || c<'0')
            {
                //add 2 to n
                n+=2;
            }
            //set old value equal to new value
            c=x;
            //if (x is a digit)
            if (x<58 && x>47)
            {
                //add to stack
                push(x-'0');
                //add to number of digits
                digits+=1;
                //reset n
                n=0;
            }
            //else
            else
            {
                //switch (x)
                switch (x)
                {
                    //case add:
                    case '+': //add sum to stack
                              push(pop((2+n))+pop(1));
                              operators+=1;
                              break;
                    //case subtract:
                    case '-': //add difference to stack
                              push(pop((2+n))-pop(1));
                              operators+=1;
                              break;
                    //case multiply:
                    case '*': //add product to stack
                              push(pop((2+n))*pop(1));
                              operators+=1;
                              break;
                    //case divide:
                    case '/': //add quotient to stack
                              push(pop((2+n))/pop(1));
                              operators+=1;
                              break;
                }
                //if (x=='=')
                if (x == '=')
                {
                    //if (more operators than digits)
                    if (digits<=operators)
                    {
                        //underflow
                        stack_underflow();
                    }
                    //else
                    else
                    {
                        //print total
                        printf("Value of expression: %d\n", pop(1));
                        //reset array
                        make_empty();
                        //break loop
                        break;
                    }//endif

                }//endif
            } //endif
        }
    }
    return 0;
}//End
