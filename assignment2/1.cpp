/*
WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc. by
including &lt;math.h&gt; header file.
*/
#include<stdio.h>
#include<math.h>

int main() {
    float x, y;

    printf("Enter a number: ");
    scanf("%f", &x);
	printf("the angles used is in radian measurement\n");
    y = sin(x);
    printf("sin(%.2f) = %.2f\n", x, y);

    y = cos(x);
    printf("cos(%.2f) = %.2f\n", x, y);

    y = log(x);
    printf("log(%.2f) = %.2f\n", x, y);

    y = pow(x, 2);
    printf("%.2f^2 = %.2f\n", x, y);

    y = sqrt(x);
    printf("sqrt(%.2f) = %.2f\n", x, y);

    return 0;
}
