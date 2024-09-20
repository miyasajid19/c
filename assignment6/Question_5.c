//Swap variables using pointers and functions.
#include<stdio.h>
void swapp(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("enter first number :");
    scanf("%d",p);
    printf("enter second number :");
    scanf("%d",q);
    printf("before  swapping\nfirst number =%d\tsecond number = %d \n",*p,*q);
    swapp(p,q);
    printf("After  swapping\nfirst number =%d\tsecond number = %d \n",*p,*q);
}
