#include<stdio.h>
#include<ctype.h>
#include "calc.h"


int asint(char s[])  // in this function only base address of s is passed everytime the function is called;
{
    
    int  sign;
    int i=0;
    int val;
    
    for(;isspace(s[i]);i++);
    sign=(s[i]=='-')?-1:1;
    if(s[i]=='-')
       i++;
    for(val=0;isdigit(s[i]);i++)
    {
        val=val*10+s[i]-'0';
    }
   
    return sign*(val);
}

