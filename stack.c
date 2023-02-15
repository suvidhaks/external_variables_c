/*
in this function include all the variables that are onlylimited to the scope of the function 
since this function is written in separate c file the variable can be made global (external)

*/


#include<stdio.h>
#include<ctype.h>
#include "calc.h"
int dp=0;
int a[MAX];
void push(int f)
{
    if(dp<MAX)
    {
         a[dp++]=f;
        
    }
   else
   {
       printf("stack is full");
   }
    
}


int pop(void)
{
    if(dp>0)
    {
        return a[--dp];
    }
    else
    {
     printf("stack is empty");
     return 0;
    }
}
