//WAP to utilize ternary operator (?:).
#include<stdio.h>
int main(){
	int age;
	printf("enter your age ");
	scanf("%d",&age);
	age<18?printf("not eligible for voting"):printf("eligible for voting");
}