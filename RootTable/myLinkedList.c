#include <stdio.h>
#include <stdlib.h>
#include "myLinkedList.h"

/*
 * Title: insert
 *
 * Summary: takes a value and adds it to the linked list in order
 *
 * Inputs: float f, node pointer *first
 * Outputs: a node pointer to the first in the linked list
 ****************************
 * Pseudocode
 *
 * Begin
 * define node structure
 * define variables
 * allocate space for new node
 * set data for new node
 * find position where new node fits
 *     if fits in last place
 *         last node points to new node
 *         new node points to null
 *         return first
 *     endif
 * endloop
 * if new node is already in linked list
 *     free new node
 *     return first
 * endif
 * new node->next points to current
 * if new node is first
 *     first = new node
 * else
 *     previous->next = new node
 * endif
 * return first
 * End
 */

struct node *insert(float f, struct node *first)//begin
{
    //define variables
    struct node *cur = NULL, *prev = NULL, *new_node=NULL;
    //allocate space for new node
    new_node = malloc(sizeof(struct node));
    if (new_node==NULL)
    {
        printf("Could not allocate space to new node.");
        return NULL;
    }
    //set data for new node
    new_node->data=f;
    //find position where new node fits
    for (cur = first, prev=NULL;
         cur!=NULL && new_node->data > cur->data;
         prev=cur, cur=cur->next)
    {
        //if fits in last place
        if (cur==NULL)
        {
            //last node points to new node
            prev->next=new_node;
            //new node points to null
            new_node->next=NULL;
            //return first
            return first;
        }//endif
    }//endloop
    //if new node is already in linked list
    if (cur!=NULL && new_node->data == cur->data)
    {
        //free new node
        free(new_node);
        //return first
        return first;
    }//endif
    //new node->next points to current
    new_node->next=cur;
    //if new node is first
    if (prev == NULL)
    {
        //first = new node
        first = new_node;
    }
    else//else
    {
        //previous->next = new node
        prev->next = new_node;
    }//endif
    //return first
    return first;
}//end

/*
 * Title: clear_list
 *
 * Summary: frees all values in the ordered list
 *
 * Inputs: node pointer *first
 * Outputs: Void
 ****************************
 * Pseudocode
 *
 * Begin
 * for all values in list
 *     free node
 * endloop
 * End
 */

void clear_list(struct node *first) //begin
        {
            //for all values in list
            for (struct node *prev=first, *cur=first->next;cur!=NULL;prev=cur, cur=cur->next)
            {
                //free node
                free(prev);
            }//endloop
        }//end



