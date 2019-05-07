/*
 *  This file contains the stock portfolio functions main, 
 *  menu and do_select.
 */
#include <stdio.h>
#include "stock.h"

/* prototypes for static functions */
static int menu();
static void do_select(int choice);

/**
 *  This is the main function of the stock portfolio program.
 */
int 
main()
{
    int selection;

    init_index();           /* init index function */
    selection = menu();     /* call menu return selection */
    while(selection != '6')
    {
        do_select(selection);
        selection = menu();
    }
}


/**
 *  This function will display the choices to the user.
 *  The value of the function will be the selection.
 **/
static int 
menu()
{
    int choice;

    printf("\tStock Portfolio Management System\n\n");
    printf("\t\tPlease make a selection\n\n");
    printf("\t1 -- buy a stock\n");
    printf("\t2 -- Sell a stock\n");
    printf("\t3 -- Report current holdings\n");
    printf("\t4 -- Report gains and losses for the year\n");
    printf("\t5 -- Remove a current holding\n");
    printf("\t6 -- Done\n\n");

    choice = 0;
    while(choice == 0) 
    {
        printf("\t?");
        choice = getchar();
        getchar();  /* consume the newline */
        if(choice < '1') choice = 0;
        if(choice > '6') choice = 0;
        if(choice == 0) error(0);
    }

    return choice;
}


/**
 *  This function will accept a menu choice and call the
 *  appropriate function to carry out the operation.
 */
static void 
do_select(int choice)
{
    if(choice == '1')
        buy();
    else if(choice == '2')
        sell();
    else if(choice == '3')
        current();
    else if(choice == '4')
        gain_loss();
    else if(choice == '5')
        rem_stock();
}
