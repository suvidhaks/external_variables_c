/*
the use of static variable is coz of its permanence storage;
unlike external variables static variables will not conflict with the variable names declared in other functions
static variables are limited to the scope where they are defined or declared
static variables are always used within a function;
in this program the stat() is called three times, since the variable is static
the function retains its previous value and then increment is applied to the variable;
if it was not static then everytime the function is called it takes the value 10;
*/

#include <stdio.h>
int i1=0;
int stat();
int main()
{
   int i=3;
   i++;
   for(i=0;i<3;i++)
    printf("%d ", stat());
   
   return 0;
}

int stat()
{
 static  int i=10;
 return i++;
}