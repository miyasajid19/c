//Check the size of various pointer variables for int, char, float etc.
#include<stdio.h>
int main(){
    int a=407,*p,*q,*r,*s;
    float b=432.407;
    char c= "p";
    double d=432407.407432;
    p=&a;
    q=&b;
    r=&c;
    s=&d;
    printf("the size of %d in address %u is %d bytes.\n",a,p,sizeof(p));
    printf("the size of %.3f in address %u is %d bytes.\n",b,q,sizeof(q));
    printf("the size of %c in address %u is %d bytes.\n",c,r,sizeof(r));
    printf("the size of %f in address %u is %d bytes.\n",d,s,sizeof(s));
    return 0;
}