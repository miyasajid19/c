//LCM of two numbers using a function
#include<stdio.h>
int lcm(int a,int b)
{
	int common=1;
	for (int i=1;i<b;i++)
	{
		if ((a%i==0 )&&(b%i==0 ))
		{
			common=common*i;
		}
		
	}
	int remaining=(a*b)/common;
	return common*remaining;
}
int main()
{
	printf("Enter two numbers : ");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("the lcm of %d and %d is %d",a,b,a>b?lcm(a,b):lcm(b,a));
	return 0;
}