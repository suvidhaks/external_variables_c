/*
recursion functions always writes the output in the stack 
therefore putchar is used before the function coz stacks works on the principle LIFO
this function handles both signed and unsigned integer;
this program is solved exercise of 4.12
*/



#include <stdio.h>
void printd(int);
int main()
{
    printd(-123);

    return 0;
}


void printd(int n)
{
    if(n==0)
    {
       return ;
    }
   if(n<0)
   {
       putchar('-');
       n=-n;
   }
   
        putchar(n%10+'0');
        printd(n/10);
       
}