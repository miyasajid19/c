//factorial
#include<stdio.h>
int fact(int num){
	int a=1;
	for (int i =1;i<=num;i++)
	{
		a=a*i;
	}
	return a;
}
int recursion( int num)
{
	if ((num==0) || (num==1))
	{
		return 1;
	}
	else 
	{
		return num* recursion(num-1);
	}
}
int main()
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	if (num<0)
	{
		printf("invalid input");
		
	}else
	{
		printf(" the factorial of %d via function is %d\n",num,fact(num));
		printf("the factorial of %d via recurrsion is %d",num,recursion(num));
	}
	return 0;
}