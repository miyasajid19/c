//Use functions, loops and arrays to convert a decimal number into (a) binary (b)
//octal (c) hexadecimal.
#include<stdio.h>
#include<stdlib.h>
void convert(){
	int num=15;
	char binary[20];
	itoa(num,binary,2);
	char octal[20];
	itoa(num,octal,8);
	char hexadecimal[20];
	itoa(num,hexadecimal,16);
	printf("\n\nthe equivalent connversion of %d is",num );
	printf("\nbinary is %s",binary);
	printf("\noctal is %s",octal);
	printf("\nhexadecimal is %s",hexadecimal);
	
}
void binary(int num){
	int binary[32];
	int i=0;
	while(num > 0)	{
		binary[i]=num%2;
		num=num/2;
		i=i+1;
	}
	printf(" binary solution is : ");
	for (int j=i-1;j>=0;j--){
		printf("%d",binary[j]);
	}
}
void octal(int num){
	int octal[32];
	int i=0;
	while(num > 0)	{
		octal[i]=num%8;
		num=num/8;
		i=i+1;
	}
	printf(" octal solution is : ");
	for (int j=i-1;j>=0;j--){
		printf("%d",octal[j]);
	
	}
}
void hexadecimal(int num) {
    char hexadecimal[32];
    int i = 0;

    while (num > 0) {
        int remainder = num % 16;
        if (remainder >= 10) {
            switch (remainder) {
                case 10:
                    hexadecimal[i] = 'A';
                    break;
                case 11:
                    hexadecimal[i] = 'B';
                    break;
                case 12:
                    hexadecimal[i] = 'C';
                    break;
                case 13:
                    hexadecimal[i] = 'D';
                    break;
                case 14:
                    hexadecimal[i] = 'E';
                    break;
                case 15:
                    hexadecimal[i] = 'F';
                    break;
            }
        } else {
            hexadecimal[i] = remainder + '0'; 			// Convert digit to character if '0' is not added then it will be converted into string
        }

        num = num / 16;
        i = i + 1;
    }
	printf(" hexadecimal solution is : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
}int main(){
	int decimal;
	convert();
	printf("\nenter the decimal number : ");
	scanf("%d",&decimal);
	binary(decimal);
	printf("\n\n\n\n\n");
	octal(decimal);
	printf("\n\n\n\n\n");
	hexadecimal(decimal);	
}