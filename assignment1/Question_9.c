//WAP to find Nth root of a number.
#include<stdio.h>
#include<math.h>

int main(){
    float a, b;
    printf("enter any number ");
    scanf("%f", &a);
    printf("enter nth root order ");
    scanf("%f", &b);
    printf("the %f root of %f is %f", b, a, pow(a, 1.0 / b));
}
