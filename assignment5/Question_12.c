//Sum and average of array elements
#include<stdio.h>
int main(){
	int data[5],sum=0,average=0;
	for (int i=0;i<5;i++)
	{
		printf("Enter data %d : ",i+1);
		scanf("%d",&data[i]);
		sum=sum+data[i];
	}
	printf("The sum is %d \nThe average is %d",sum,sum/5);
}