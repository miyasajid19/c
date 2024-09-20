//Rotate array elements (123,231,312) or (abcd, bcda, cdab, dabc)
#include<stdio.h>

int main(){

	printf("How many datas do you have? ");
	int index;
	scanf("%d ",&index);
	int data[index];
	for (int i =0 ; i<index;i++){
		printf("enter the data %d : ", i+1);
		scanf("%d",&data[i]);
		
		
	}
	printf("original array : \n");
	for (int i =0 ; i<index;i++){
		printf(" %d \t ", data[i]);
	}
	printf("\narray after rotations");
	int count=0;
	printf("\n\n\n\n");
	while(count<index){
		int rotation[index];
		int temp=data[0];
		for (int i = 0; i <index-1; i++) {
			
        data[i] = data[i + 1];
    }
    data[index-1] = temp;

    	
		printf("\n after rotation\n");
		for (int i=0;i<index;i++){
			printf("%d \t",data[i]);
		}
		printf("\n\n");
		count=count+1;
	}
}