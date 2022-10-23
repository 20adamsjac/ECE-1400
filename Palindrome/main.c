/*
 * Function Title: main
 *
 * Summary: tells user if phrase/word is a palindrome or not
 *
 * Inputs: none
 * Outputs: none
 *
 * Compile Instructions: gcc main.c -o main.exe
 * ********************************************************
 * Pseudocode
 *
 * Begin
 *  Define/initialize variables
 *  print prompt
 *  for (values of array)
 *      scan for variables
 *      if (value = tab)
 *          break loop
 *      endif
 *      if (value not a letter)
 *          scan for next value
 *      else
 *          add to counter
 *          if (value is uppercase)
 *              make lowercase
 *          endif
 *      endif
 *  endloop
 *  set pointer to array
 *  for (i=0;array letters;i++)
 *      if (last-i==first+i)
 *      else
 *          print "not a palindrome"
 *          exit(0)
 *      endif
 *  endloop
 *  print "it is a palindrome"
 * End
 */

#include <stdlib.h>
#include <stdio.h>

int main() {
    //Define/initialize variables
    unsigned text;
    char tem[1000]={0}, *p;
    text=0;
    //print prompt
    printf("Enter a word/phrase then hit tab and enter to continue: ");
    //for (values of array)
    for (p=tem;p<tem+1000;p++){
        //scan for variables
        scanf("%c", p);
        //if (value = tab)
        if (*p==9){
            //break loop
            break;
        }//endif
        //if (value not a letter)
        if ((*p<65)||((*p>90)&&(*p<97))||(*p>122)) {
            //scan for next value
            p--;
        }
        else {//else
            //add to counter
            text++;
            //if (value is uppercase)
            if ((*p<=90)&&(*p>=65)) {
                //make lowercase
                *p+=32;
            }//endif
        }//endif
    }//endloop
    //set pointer to array
    p=tem;
    //for (i=0;array letters;i++)
    for (int i=0;i<text/2;i++){
        //if (last-i==first+i)
        if (*(p+i)==*(p+text-1-i)){}
        else {//else
            //print "not a palindrome"
            printf("The word/phrase is not a palindrome.\n");
            //exit(0)
            exit(0);
        }//endif
    }//endloop
    //print "it is a palindrome"
    printf("the word/phrase is a palindrome.\n");
    }//End


