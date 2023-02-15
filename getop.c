#include<stdio.h>
#include<ctype.h>
#include "calc.h"


int getop(char s[])
{
    int i;
    int c;
    
    while((s[0]=c=getch())==' ' || c=='\t');  //  the significance of this while loop is if you encounter space it; the function returns the value
    s[1]='\0';
    if(!isdigit(c))
    {
        return c;
    }
    i=0;
    if(isdigit(s[i]))
    {
        i++;
    }
    for(;isdigit(s[i]=c=getch());i++);
    s[i]='\0';
    if(c!=EOF)
    {
        ungetch(c);
    }
    return NUMBER;
}

