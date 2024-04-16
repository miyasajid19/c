//If a number is prime or not.
#include<stdio.h>
void check(int num){
	int count=0;
	if (num==0 || num==1)
	{
		printf("neither prime nor composite");
		
	}
	
	else
	{
		for (int i=1;i<=num;i++)
	{
		
		if ((num%i)==0)
		{
			count=count+1;
		}
	}
	if (count==2)
	{
		printf("%d is prime",num);
		
	}
	else{
		printf("%d is composite",num);
	}
	}
}
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	check(num);
}