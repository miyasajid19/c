//Add digits of an integer using a function
#include<stdio.h>
int sum(int a){
	int remainder=0;
	int c=0;
	while(a!=0)
	{
		remainder=a%10;
		c=c+remainder;
		a=a/10;
	}
	return c;
}
int main(){
	printf("Enter the number : ");
	int a;
	scanf("%d",&a);
	printf("The sum of digits of %dis %d",a,sum(a));
	return 0;
}