#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node *insert(float f, struct node *first);

void clear_list(struct node *first);

struct node
{
    float data;
    struct node *next;
};