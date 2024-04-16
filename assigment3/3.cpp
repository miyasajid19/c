//To implement calculator (+,-/,*,% ) using switch statement
#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	top:
	printf("press 1 for additon\n 2 for substraction \n 3 for multiplication and \n 4 for division \n");

	scanf("%d",&c);
	switch (c){
		case 1:
			{
			printf("%d + %d = %d",a,b,a+b);
			break;	
			}
		case 2:
			{
			printf("%d - %d = %d",a,b,a-b);
			break;	
			}
		case 3:
			{
			printf("%d * %d = %d",a,b,a*b);
			break;	
			}
		case 4:
			{
			printf("%d / %d = %d with remainder =%d",a,b,a/b,a%b);
			break;	
			}
		default:
			{
				printf("wrong input");
			goto top;
			break;	
			}
	}
}
