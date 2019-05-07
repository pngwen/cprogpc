/*
 *  This file contains the functions to create and access
 *  the index of current holdings.
 */
#include <stdio.h>
#include "stock.h"


/**
 *  This function will read the current holdings file and 
 *  build an index of used and free records.
 **/
void init_index()
{
    printf("Entered init_index\n");
}


/** 
 *  This function will search the index for the specified 
 *  name.  It will return the index number (offset) of the
 *  record or a -1 if the record is not found.
 */
int search_index()
{
    return -1;
}


/**
 *  This function will add an entry to the index.  It will
 *  first search the index for a free entry.  If found, the
 *  stock is added and the offset is returned.  If the index
 *  is full, -1 is returned.
 **/
int add_index()
{
    return -1;
}


/**
 *  This function will remove a stock from the index.
 **/
void rem_index()
{
    
}
