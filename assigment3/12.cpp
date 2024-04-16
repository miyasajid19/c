//Read in 20 integers and count the even numbers
#include<stdio.h>
int main(){
	int arr[20];
	int count=0;
	printf("this program will take 20 numbers from user and counts the evens");
	for(int i=0;i<20;i++){
		printf("enter the entry no. %d ",i+1);
		scanf("%d",&arr[i]);
		if (arr[i]%2==0){
			count=count+1;
		}
	}
	printf("there are %d evens datas in the given inputs",count);
	return 0;
}