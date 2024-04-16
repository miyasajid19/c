//printf(" in fractional notation : %2f / %2f",p,q);

#include<stdio.h>
int main(){
	float p,q;
	printf("enter first number ");
	scanf("%f",&p);
	top:
	printf("enter second number ");
	scanf("%f",&q);
	printf(" \n%f + %f = %f ", p,q,p+q);
	printf(" \n%f - %f = %f ", p,q,p-q);
	printf(" \n%f * %f = %f ", p,q,p*q);
	printf(" \n%f / %f = %f ", p,q,p/q);
}