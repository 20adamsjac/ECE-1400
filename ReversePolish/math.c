#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "math.h"

#define STACK_SIZE 100

int contents[STACK_SIZE]={0};
int top=0;

/*
 *Function Title: make_empty
 *
 * Summary: sets top equal to zero
 *
 * Inputs: None
 * Outputs: None
 ***********************
 * Pseudocode
 *
 * Begin
 * reset array
 * End
 */

void make_empty()
{//begin
    //reset array
    top=0;
}//end

/*
 *Function Title: is_empty
 *
 * Summary: tests to see if top is equal to zero
 *
 * Inputs: None
 * Outputs: True or False
 ***********************
 * Pseudocode
 *
 * Begin
 * return top == 0
 * End
 */

bool is_empty(void)
{//begin
    //return top == 0
    return top == 0;
}//end

/*
 *Function Title: is_full
 *
 * Summary: tests to see if the stack is full
 *
 * Inputs: None
 * Outputs: True or False
 ***********************
 * Pseudocode
 *
 * Begin
 * return top == 100
 * End
 */

bool is_full(void)
{//begin
    //return top == 100
    return top == STACK_SIZE;
}//end

/*
 *Function Title: push
 *
 * Summary: puts a given value onto the stack
 *
 * Inputs: int i
 * Outputs: None
 ***********************
 * Pseudocode
 *
 * Begin
 * if array is full
 *  overflow
 * else
 *  add value to stack
 *  move to next position
 * End
 */

void push(int i)
{//begin
    //if array is full
    if(is_full())
        //overflow
        stack_overflow();
    //else
    else
    {
        //add value to stack
        contents[top] = i;
        //move to next position
        top+=1;
    }
}//end

/*
 *Function Title: pop
 *
 * Summary: recalls previous values on the stack
 *
 * Inputs: int i
 * Outputs: int
 ***********************
 * Pseudocode
 *
 * Begin
 * return previous value in stack
 * End
 */

int pop(int i)
{//begin
    //return previous value in stack
    return contents[top-i];
}//end

/*
 *Function Title: stack_overflow
 *
 * Summary: prints error message if function overflows
 *
 * Inputs: None
 * Outputs: None
 ***********************
 * Pseudocode
 *
 * Begin
 * print error
 * exit
 * End
 */

void stack_overflow(void)
{//begin
    //print error
    printf("Expression is too complex\n");
    //exit
    exit(0);
}//end

/*
 *Function Title: stack_underflow
 *
 * Summary: prints error message if there are too few operands
 *
 * Inputs: None
 * Outputs: None
 ***********************
 * Pseudocode
 *
 * Begin
 * print error
 * exit
 * End
 */

void stack_underflow(void)
{//begin
    //print error
    printf("Not enough operands in expression\n");
    //exit
    exit(0);
}//end