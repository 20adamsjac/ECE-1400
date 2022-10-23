/*************************************************
* Function Title: pay_amount
*
* Summary: Calculates the fewest bills needed to represent a value
*
*Inputs: int dollars, int *twenties, int *tens,
*        int *fives, int *twos, int *ones
*Outputs: None
**************************************************
* Pseudocode
*
* Begin
* set twenties to quotient of dollars and 20
* subtract twenties times quotient from dollars
* set tens to quotient of dollars and 10
* subtract tens times quotient from dollars
* set fives to quotient of dollars and 5
* subtract fives times quotient from dollars
* set twos to quotient of dollars and 2
* subtract twos times quotient from dollars
* set ones equal to dollars
* End
*************************************************/
#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens,
                 int *fives, int *twos, int *ones) {    //Begin

    //set twenties to quotient of dollars and 20
    *twenties = dollars/20;
    //subtract twenties times quotient from dollars
    dollars -= *twenties * 20;

    //set tens to quotient of dollars and 10
    *tens = dollars/10;
    //subtract tens times quotient from dollars
    dollars -= *tens * 10;

    //set fives to quotient of dollars and 5
    *fives = dollars/5;
    //subtract fives times quotient from dollars
    dollars -= *fives * 5;

    //set twos to quotient of dollars and 2
    *twos = dollars/2;
    //subtract twos times quotient from dollars
    dollars -= *twos * 2;

    //set ones equal to dollars
    *ones = dollars;
} //End

/*************************************************
* Function Title: main
*
* Summary: Asks for dollar value and displays fewest bills to represent it
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
* display prompt
* scan for variables
* use pay_amount to calculate values
* display values
* End
*************************************************/

int main() { //Begin

    //define variables
    int dollars=0, twenties=0, tens=0, fives=0, twos=0, ones=0;

    //display prompt
    printf("Enter an amount to be broken into bills: $");

    //scan for variables
    scanf("%d", &dollars);

    //use pay_amount to calculate values
    pay_amount (dollars, &twenties, &tens, &fives, &twos, &ones);

    //display values
    printf("The following numbers of the specified bills are required:"
           "\n$20: %d\n$10: %d\n$5: %d\n$2: %d\n$1: %d\n"
           ,twenties, tens, fives, twos, ones);

    return 0;
}   //End

