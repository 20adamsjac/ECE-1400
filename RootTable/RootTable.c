#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "myLinkedList.h"

/*
 * Title: main.c
 *
 * Summary: reads values from a text file and prints them to another file
 *
 * Inputs: None
 * Outputs: None
 *
 * Compile Instructions: make (./RootTable example1.txt example2.txt to run)
 ****************************
 * Pseudocode
 *
 * Begin
 * initialize square root structure
 * define variables
 * allocate memory to first in list
 * create square root value array
 * open input file to read
 * while not at the end of the file
 *     read values
 *     put into linked list in order, skipping repeats
 * endloop
 * close input file
 * open output file to write
 * for values that were read
 *     if data is greater than 99
 *         print error
 *         exit
 *     endif
 *     loop(for(i=0;i<100;i++))
 *         if data is equal to i
 *             print i values from square root table into output file
 *         endif
 *     endloop
 * endloop
 * free memory
 * close output file
 * return zero
 * End
 */

int main(int argc, char **argv) //Begin
{
    //initialize square root structure
    struct sqrt
    {
        float x;
        float y;
        float z;
        float w;
    };
    //define variables
    float f, g=0;
    FILE *i, *o;
    struct sqrt array[100];
    //allocate memory to first in list
    struct node *first = malloc(sizeof(struct node));
    if (first==NULL)
    {
        printf("Could not allocate space to first.");
        exit(EXIT_FAILURE);
    }
    //create square root value array
    for (int j = 0; j < 100; j++)
    {
        f=(float) j;
        array[j].x= f;
        array[j].y=sqrtf(f);
        array[j].z=cbrtf(f);
        array[j].w=sqrtf(array[j].y);
    }
    //open input file to read
    i = fopen(argv[1], "r");
    if (i == NULL)
    {
        printf("An error occurred while opening the input file.\n");
        exit(EXIT_FAILURE);
    }
    //while not at the end of the file
    while (!feof(i))
    {
        //read values
        fscanf(i, "%f", &g);
        //put into linked list in order, skipping repeats
        first = insert(g, first);
    }//endloop
    //close input file
    fclose(i);
    //open output file to write
    o = fopen(argv[2],"w");
    if (o == NULL)
    {
        printf("An error occurred while opening the output file.\n");
        exit(EXIT_FAILURE);
    }
    //for values that were read
    for (struct node *cur=first->next;cur!=NULL;cur=cur->next)
    {
        //if data is greater than 99
        if (cur->data>99)
        {
            //print error
            printf("Invalid value: %.0f\n", cur->data);
            //exit
            exit(EXIT_FAILURE);
        }//endif
        //loop(for(i=0;i<100;i++))
        for (int j = 0; j < 100; j++)
        {
            //if data is equal to i
            if (cur->data == (float) j)
            {
                //print i values from square root table into output file
                fprintf(o,"%.0f\t%.3f\t%.3f\t%.3f\n",array[j].x, array[j].y,
                        array[j].z, array[j].w);
            }//endif
        }//endloop
    }//endloop
    //free memory
    clear_list(first);
    //close output file
    fclose(o);
    //return 0
    return 0;
}//End
