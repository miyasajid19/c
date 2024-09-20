/*11. Keep reading in integers until one integer larger than 100 is not input. For example: 4 -
90, 35, 78, 110 QUIT! (since 110 is bigger than 100)*/
#include<stdio.h>
int main(){
	int num;
	while(1){
		printf("enter number less than 100 ");
		scanf("%d",&num);
		if (num>100){
			printf("greater than 100");
			break;
		}
	}
	
	}