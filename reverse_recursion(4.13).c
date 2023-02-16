/*
this program is solved exercise from Brian Keringham textbook ex-4.13;
recursion itself is looping therefore we use branching conditions ;
this program contains two functions for reverse one is simple getchar();
one more function uses array;
void reverse_array(char a[], int n)
in this function everytime this function is called recursively the base address of the current loaction is passed as an argument
e.x consider a[0],a[1], a[2], a[3];
n=4;
every function call value of n will be decremented when n=4 the array location is pointing to a[0];
so the base address is a[0] address;
on the next function cal n=3 and array loc is a[1] so the base address is a[1] which is equal to a;
and so on ...
note that  when n=0 array loc is a[3] generally if the character array is assigned to string then a[3]='\0';
therefore at n=0; return from the function;
*/

#include <stdio.h>
#include<string.h>
void reverse();
void reverse_array(char a[], int n);

int main()
{
   char a[]="suvidha NITC";
   int n;
   n=strlen(a);
  
   reverse_array(a,n);
   printf("\n");
   printf("enter the string");
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




void reverse_array(char a[], int n)
{
   if(n==0)
   {
      
       return;
   }

   putchar (a[n-1]);
  reverse_array(a,n-1);  
         
}
