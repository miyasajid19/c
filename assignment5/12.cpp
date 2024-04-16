//12. Sort the array elements in ascending order
#include<stdio.h>
int main(){
	printf("Enter how many data do you have? ");
	int index;
	scanf("%d",&index);
	int data[index];
	for (int i =0; i<index;i++){
		printf("Entry no. %d : ",i+1);
		scanf("%d",&data[i]);
	}
	printf("unsorted data : \n");
	for (int i =0 ; i<index;i++){
		printf(" %d \t ", data[i]);
	}
	    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

	printf("sorted data : \n");
	for (int i =0 ; i<index;i++){
		printf(" %d \t ", data[i]);
	}
	return 0;
}