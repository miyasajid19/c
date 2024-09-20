//to remove duplicate
#include<stdio.h>
int main(){
	int arr[]={1,1,1,2,2,2,3,5,6,7,8,8,9,9,12,13};
	int unique[16];
	int size=0;
	int i=0;
	for (i=0;i<15;i++)
	{
		if (arr[i]!=arr[i+1])
		{
			unique[size]=arr[i];
			size=size+1;

		}
	}
	unique[size]=arr[i];
	++size;
	for (int i=0;i<size;i++)
	{
		printf("%d\n",unique[i]);
	}
}