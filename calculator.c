/*
in this program i have considered '-' to be a unary operator;
this program also works for % operators for both +ve dividend and -ve dividened;
this program works for integer values

note: to compile the program: use the command below:

compile:  gcc '.\calculator.c' .\getch.c .\stack.c .\getop.c .\ascint.c -o cal
run : ./cal.exe

note: the compile command creates one object file by compiling all the linked c files
test case 1
input: 1 2 - + 4 5 + *
o/p: -9

test case 2
input: 1 2 - + 4 5 + * 4 %
o/p: 3


*/

#include <stdio.h>
#include<ctype.h>
#include "calc.h"

char s[MAX];


int main()
{
    //double d;
    int d;
    int type;
   // char s[MAX];
    int op2;
     int val1;
     int a,b, i1;
     int flag1;
while((type=getop(s))!=EOF)
{
     switch(type)
    {
        
        case NUMBER: 
                     
                      val1=asint(s);
                     push(asint(s));  // atofl() is passed as an argument since the return type of atofl is double; and push accepts the arg double
                     
                      break;

         case '+': push(pop() + pop());  //pop returns double;
                   // printf("\nlf=%lf", a[dp]);    
                    break;

         case '*' :  push(pop() * pop());  
                   // printf("\nlf=%lf", a[--dp]); 
                     break;

           case '-' : op2=pop();
                       op2=op2*(-1);
                       push(op2);
                        // printf("\nlf=%lf", a[dp]);
                       break;

            case '/' : op2=pop();
                        if(op2!=0)
                        {
                           push(pop() / op2);
                        }
                         // printf("\nlf=%lf", a[dp]);
                       break; 

            case '%' : b=pop(); 
                       a=pop();    
                       if(a>=0 && b!=0) 
                       {
                         if(b>a)
                         {
                            push(a);
                         }           
                        else
                        {
                           push(a%b);
                        }
                       }
                      
                      else if(a<0 && b!=0)
                      {
                        for(i1=0;i1<b;i1++)
                        {
                               if((-(a-i1))%b==0)
                              {
                                     flag1=i1;
                                      break;
                                  }
                         }
                        push(flag1);
                      }

                        break;
             case '\n':      printf("\nresult=%d", pop());  
                              // printf("\ndp=%d", dp);                     
                              break;
    }  
}                

  
    return 0;
}









