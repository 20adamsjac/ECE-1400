#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Title: main
 *
 * Summary: Sorts a given set of words into alphabetical order
 *
 * Compile Instructions: gcc main.c -o main.exe
 *
 * Inputs: None
 * Outputs: None
 ****************************
 * Pseudocode
 *
 * begin
 * define variables
 * assign space to variables
 * assign each pointer a space
 * prompt user
 * scan for words
 * sort alphabetically
 * print results in order
 * end
 */

int main(int argc, char **argv)//begin
{   // define variables
    char **p, *x;
    struct node *y;
    //assign space to variables
    x = malloc(16*sizeof(char));
    if (x==NULL)
        exit(1);

    p = malloc(atoi(argv[1])* sizeof(char *));
    if (p==NULL)
        exit(1);

    for (int i = 0; i < atoi(argv[1]); i++)
    {
        //assign each pointer a space
        p[i] = malloc(16*sizeof(char));
        if (p[i]==NULL)
            exit(1);
        //prompt user
        printf("Enter a word: ");
        //scan for words
        scanf("%s", p[i]);
    }
    //sort alphabetically
    for (int i = 0; i < atoi(argv[1])-1; ++i)
    {
        for (int j = 0; j < atoi(argv[1])-1; ++j)
        {
            int k;
            k=j+1;
            strcpy(x,p[j]);
            if (strcmp(p[j],p[k])>0)
            {
                strcpy(p[j],p[k]);
                strcpy(p[k],x);
            }
        }
    }
    //print results in order
    printf("Sorted words: ");

    for (int i = 0; i < atoi(argv[1]); i++)
    {
        printf("%s ", p[i]);
    }
    printf("\n");
    return 0;
}   //end