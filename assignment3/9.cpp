/*
9. WAP using loop (for, while, do-while):
*Factorial of number
Whether no. is prime or not
X raised to power n
Check if the input integer is an Armstrong number or not?
Range of set of entered nos. by finding smallest and largest
Multiplication table
HCF of two numbers
GCD of two numbers
*Generate Fibonacci series
*/

#include<stdio.h>
#include<math.h>

void multiplication(){
	int num;
	printf("\nEnter the Number for generating multiplication table");
	scanf("%d",&num);
	for (int i=1;i<=10;i++){
		printf("%d * %d = %d \n",num,i,num*i);
	}
}
void fibonocii(){
	int a,b,n,c;
	a=1;
	b=1;
	printf("\nenter the range you want?");
	scanf("%d",&n);
	printf("1\n1\n");
	
	for (int i=0;i<n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		
	}
}
void armstrong(int num) {
	printf("\nenter to check armstrong or not");
	scanf("%d",&num);
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    
}
void prime(int num){
	int c=0;
	printf("\n");
	for(int i=1;i<=num;i++)
	{
		if (num%i==0){
			c++;
		
		}
	}
	if (c==2){
	printf("%d is prime\n ",num);
	}
	else{
		printf("%d is composite ",num);
	}
	int x,n;
	printf("enter the value to x");
	scanf("%d",&x);
	printf("enter the value to n");
	scanf("%d",&n);
	printf("\n\n %d raised to %d is %d ", x, n, (int)pow(x, n));
	armstrong(num);
	}
void factorial(){
	int num,fact=1;
	top:
	printf("enter the number to find factoial   : ");
	scanf("%d",&num);
	if (num>0)
	{
		if (num==0)
		{
			printf("Factorial of 0 is 1");
		}else{
			for (int i=1;i<=num;i++){
			fact=fact*i;
		}
		printf("the factorial of %d is %d\n",num,fact);
		prime(num);
		}
	
	}
	else{
		goto top;
	}
}
void greatest(){
	int range;
	printf("how many numbers do you have?");
	scanf("%d",&range);
	int num[range];
	for (int i=0; i<range;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	for (int i=0; i<range;i++)
	{
		if (num[i]>num[i+1])
		{
			int temp = num[i];
			num[i]=num[i+1];
			num[i+1]=temp;
		}
	}
	printf("\n\n\n");
	for (int i=0; i<range;i++)
	{
		printf("Enter number %d : ",num[i]);
		
	}
}
void hcf() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int hcf = 1;
    int x;
    
    if (num1 > num2) {
        x = num2;
    } else {
        x = num1;
    }
    
    for (int i = 1; i <= x; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    printf("HCF is %d\n", hcf);
}
int main()
{
	factorial();
	fibonocii();
	multiplication();
	hcf();
	return 0;
}