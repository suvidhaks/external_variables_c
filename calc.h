#include<stdio.h>
/*
 this header file contains only the function declarations;
 it is always better to include only the function declarations and macro processor in the header files 
*/

#define MAX 100
#define NUMBER '0'
int getop(char s[]);
int asint(char s[]);
void push(int);
int pop(void);
int getch();
void ungetch(int );
