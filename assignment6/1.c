/*
WAP to print the address/values of the different variables (int,float,char) using &amp; and *
operators.
*/
#include<stdio.h>
int main()
{
    int a=432,*p,*q,*r;
    float b=407.432;
    char c='p';
    p=&a;
    q=&b;
    r=&c;
    printf("the value of a is %d and corresponding address is %u\n",a,p);
    printf("the value of b is %.3f and corresponding address is %u\n",b,p);
    printf("the value of c is %c and corresponding address is %u",c,p);
    
}