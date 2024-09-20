/*
WAP to input a fraction (rational number) and display. (Ask the user to
input numerator and denominator, then display it in the form of p/q
without simplification)
*/
#include<stdio.h>
int main(){
	float p,q;
	printf("enter numerator ");
	scanf("%f",&p);
	top:
	printf("enter denominator ");
	scanf("%f",&q);
	if (q==0.000000)
	{
	goto top;
	}
	printf(" in fractional notation : %f / %f",p,q);
}