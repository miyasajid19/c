/*WAP to swap two variables using with and without a temp variable using
a function besides the main function.*/
#include<stdio.h>
void change(int b, int a){	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("before swapping \n first number is %d and second number is %d",a,b);
}

int main(){
	printf("enter fist number");
	int a , b;
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	
	printf("before swapping \n first number is %d and second number is %d",a,b);
	printf("\n");
	change(a,b);
}