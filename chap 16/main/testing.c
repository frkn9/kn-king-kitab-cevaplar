// An example program to demonstrate working
// of enum in C
#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    day = Mon;
    printf("%d\n",day);
    return 0;
}

