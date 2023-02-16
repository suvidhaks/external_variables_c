/*
recursion itself is looping therefore we use branching conditions 
*/

#include <stdio.h>
#include<string.h>
void reverse();
int main()
{
   
    reverse();

    return 0;
}


void reverse()
{
   char c;
   if((c=getchar())!='\n')
   {
       reverse();
   }
     putchar(c) ;  
    return ; 
}