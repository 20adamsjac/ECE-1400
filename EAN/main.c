/*
 Function Title: main.c

 Summary: Calculate the check digit for an EAN
 
 Inputs: None
 Outputs: None
 
 Compile Instructions: gcc main.c -o main.exe
 ****************************************
 Pseudocode
 
 BEGIN
    DEFINE VARIABLES
    PRINT "ENTER DIGITS"
    SCAN FOR VARIABLES
    COMPUTE CHECK DIGIT
    PRINT CHECK DIGIT
 END
*/

#include <stdio.h>

int main(void)
{                                                                           //BEGIN
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, c;               //DEFINE VARIABLES
    
    printf ("Enter the first twelve digits of the EAN:\n\n");               //PRINT "ENTER DIGITS"
     
    scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",                          //SCAN FOR VARIABLES
           &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,                          //SCAN FOR VARIABLES
           &n9, &n10, &n11, &n12);                                          //SCAN FOR VARIABLES
    
    c= 9-((((3*(n2+n4+n6+n8+n10+n12))+(n1+n3+n5+n7+n9+n11))-1)%10);         //COMPUTE CHECK DIGIT
    
    printf("\nCheck digit: %d\n", c);                                       //PRINT CHECK DIGIT
    
    return 0;
}                                                                           //END
