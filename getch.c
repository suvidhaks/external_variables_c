/* 
in this function we need only char buff[] and bufp hence these two declarations are made global their scope is limited only to this file 
*/

#include<stdio.h>
#include<ctype.h>
#include "calc.h"

char buff[MAX];
int bufp=0;

int getch()
{
   return (bufp>0) ? (buff[--bufp]) : getchar(); // in this function if we encounter characters like \n  we push it to the char buff[];
}

void ungetch(int c)
{
    buff[bufp++]=c;
    return ;
}