/*
Assignment operator assigns right hand side value to left hand side variable.
Use this idea to interchange (swap) values of two variables. (Hint: You may need a
third variable. Think like switching coffee and tea between two cups using a third cup)
*/
#include<stdio.h>
int main(){
	int a, b, temp;
	a=432;
	b=407;
	printf("initial values are : \n a=%d \n b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nfinal values are : \n a=%d \n b=%d",a,b);
	return 0;
}