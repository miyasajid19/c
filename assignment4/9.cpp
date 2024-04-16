//Fibonacci series of n numbers using recursion
#include<stdio.h>
int recc(int i){
	if (i==0)
	{
		return 0;
	}
	else if (i==1){
		return 1;
	}
	else
	{
		return recc(i-1)+recc(i-2);
	}
}

int main()
{
	printf("enter how many terms do you want ?? ");
	int n;
	scanf("%d",&n);
	
	for (int i =0;i<n;i++)
	{
		printf("%d ",recc(i));
	}
}