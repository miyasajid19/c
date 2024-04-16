#include <stdio.h>
int main(){
	int n,sum;
	printf("enter the number of data you have : ");
	scanf("%d",&n);
	int data[n];
	for (int i=0;i<n;i++){
	printf("enter your data %d : ", i+1);
	scanf("%d",&data[i]);
	sum=sum+data[i];
	}
	double mean;
	mean=(double)sum/n;
	printf("the mean is %lf",mean);
	return 0;
}