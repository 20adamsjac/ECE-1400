/*
 Function Title: Main
 
 Summary: Creates square with given values and calculates sum
 
 Inputs: None
 Outputs: None
 
 Complie Instructions: gcc main.c -o main.exe
**************************************************
 PSEUDOCODE:
 
 BEGIN
    CREATE VARIABLES
    PRINT PROMPT
    SCAN FOR VARIABLES
    CALCULATE SUMS
    DETERMINE IF PERFECT
    PRINT SQUARE
    PRINT SUMS
 END
*/

#include <stdio.h>

int main(void)
{                                                                                       //BEGIN
    int n1, n2, n3, n4,                                                                 //CREATE VARIABLES
        n5, n6, n7, n8,                                                                 //CREATE VARIABLES
        n9,n10, n11, n12,                                                               //CREATE VARIABLES
        n13,n14, n15, n16;                                                              //CREATE VARIABLES
    int row1, row2, row3, row4,                                                         //CREATE VARIABLES
        col1, col2, col3, col4,                                                         //CREATE VARIABLES
        dia1, dia2;                                                                     //CREATE VARIABLES
    
    printf ("Enter the numbers from 1 to 16 in any order:\n\n");                        //PRINT PROMPT
    
    scanf ("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",                         //SCAN FOR VARIABLES
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10,                           //SCAN FOR VARIABLES
           &n11, &n12, &n13, &n14, &n15, &n16);                                         //SCAN FOR VARIABLES
    
    row1 = n1 + n2 + n3 + n4;                                                           //CALCULATE SUMS
    row2 = n5 + n6 + n7 + n8;                                                           //CALCULATE SUMS
    row3 = n9 + n10 + n11 + n12;                                                        //CALCULATE SUMS
    row4 = n13 + n14 + n15 + n16;                                                       //CALCULATE SUMS
    col1 = n1 + n5 + n9 + n13;                                                          //CALCULATE SUMS
    col2 = n2 + n6 + n10 + n14;                                                         //CALCULATE SUMS
    col3 = n3 + n7 + n11 + n15;                                                         //CALCULATE SUMS
    col4 = n4 + n8 + n12 + n16;                                                         //CALCULATE SUMS
    dia1 = n1 + n6 + n11 + n16;                                                         //CALCULATE SUMS
    dia2 = n4 + n7 + n10 + n13;                                                         //CALCULATE SUMS
    
    if (row1 == 34)                                                                     //DETERMINE IF PERFECT
    {                                                                                   //DETERMINE IF PERFECT
        if (row2 == 34)                                                                 //DETERMINE IF PERFECT
        {                                                                               //DETERMINE IF PERFECT
            if (row3 == 34)                                                             //DETERMINE IF PERFECT
            {                                                                           //DETERMINE IF PERFECT
                if (row4 == 34)                                                         //DETERMINE IF PERFECT
                {                                                                       //DETERMINE IF PERFECT
                    if (col1 == 34)                                                     //DETERMINE IF PERFECT
                    {                                                                   //DETERMINE IF PERFECT
                        if (col2 == 34)                                                 //DETERMINE IF PERFECT
                        {                                                               //DETERMINE IF PERFECT
                            if (col3 == 34)                                             //DETERMINE IF PERFECT
                            {                                                           //DETERMINE IF PERFECT
                                if (col4 == 34)                                         //DETERMINE IF PERFECT
                                {                                                       //DETERMINE IF PERFECT
                                    if (dia1 == 34)                                     //DETERMINE IF PERFECT
                                    {                                                   //DETERMINE IF PERFECT
                                        if (dia2 == 34) {                               //DETERMINE IF PERFECT
                                            printf ("This is a perfect square!\n\n");   //DETERMINE IF PERFECT
                                        }                                               //DETERMINE IF PERFECT
                                    }                                                   //DETERMINE IF PERFECT
                                }                                                       //DETERMINE IF PERFECT
                            }                                                           //DETERMINE IF PERFECT
                        }                                                               //DETERMINE IF PERFECT
                    }                                                                   //DETERMINE IF PERFECT
                }                                                                       //DETERMINE IF PERFECT
            }                                                                           //DETERMINE IF PERFECT
        }                                                                               //DETERMINE IF PERFECT
    }                                                                                   //DETERMINE IF PERFECT
    
    printf ("\nYour Square\n");                                                         //PRINT SQUARE
    printf ("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n\n",                   //PRINT SQUARE
            n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13,                     //PRINT SQUARE
            n14, n15, n16);                                                             //PRINT SQUARE
    
    printf ("Row sums: %d %d %d %d\n", row1, row2, row3, row4);                         //PRINT SUMS
    printf ("Column sums: %d %d %d %d\n", col1, col2, col3, col4);                      //PRINT SUMS
    printf ("Diagonal sums: %d %d\n", dia1, dia2);                                      //PRINT SUMS
    
    return 0;
}                                                                                   //END
