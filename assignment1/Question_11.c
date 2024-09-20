//WAp to find sim ple interest
#include<stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("The simple interest for the principal amount %.2f at a rate of %.2f%% for %.2f years is %.2f\n", principal, rate, time, simple_interest);

    return 0;
}
