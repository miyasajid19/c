//To reverse an array of int/float
#include<stdio.h>
int main(){
	int n;
	printf("Enter how many numbers do you have? ");
	scanf("%d",&n);
	int num[n],revnum[n];
	for (int i =0 ;i < n ; i++){
		printf("Enter Number %d " , i+1);
		scanf("%d",&num[i]);
	}
	printf(" actual array : \n");
	for (int i =0 ;i < n ; i++){
	
		printf("%d \t",num[i]);
	} 
	int a=0;
	for (int i = n - 1; i >= 0; i--) {
    revnum[a] = num[i];
    a++;
}

	printf("\nreversed array : \n");
	for (int i =0 ;i < n ; i++){
	
		printf("%d \t",revnum[i]);
	}
}