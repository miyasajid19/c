//HCF of two numbers using a separate function
#include<stdio.h>
int hcf(int a,int b)
{
	int common=1;
	for (int i=1;i<b;i++)
	{
		if ((a%i==0 )&&(b%i==0 ))
		{
			common=common*i;
		}
	}
	return common;
}
int main()
{
	printf("Enter two numbers : ");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("the hcf of %d and %d is %d",a,b,a>b?hcf(a,b):hcf(b,a));
	return 0;
}