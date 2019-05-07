/*
 * This file cotnains the expression calculator function
 * execute.
 */
#include <stdio.h>
#include "calc.h"

/**
 *  This function parses and evaluates the expression.
 **/
void execute()
{
    scanner();
    eval();
}
