#include<stdio.h>
#include<stdlib.h>

int main(){
	char string[]="3.14156";
	char p[]="1234565673";
	printf("the %s equivalent in floating point integers  is %f\n",string,atof(string));
	printf("the %s equivalent in floating point integers  is %d\n",string,atoi(string));
	printf("the %s equivalent in long  integers  is %d\n",p,atol(p));
	int num=432;
	char str[20];
	itoa(num,str,10);
	printf("the %d equivalent number in  in string  is %s\n",num,str);
	long int num1=1234567890;
	char longint[20];
	ltoa(num1,longint,10);
	printf("the %d long integer equivalent interger number in string is %s",num1,longint);

}

