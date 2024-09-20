/*
Write a program to read in numbers until the number -999 is encountered. The sum of
all numbers read until this point should be printed out.
*/

#include<stdio.h>
int main()
{
	int num;
	int sum;
	while (1){
		printf("Enter the number ");
		scanf("%d",&num);
		sum=sum+num;
		if (num==-999){
		break;}
	}
	printf("sum of all numers= %d",sum);
}