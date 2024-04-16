//WAp to find the compound interest 
#include<stdio.h>
#include<math.h>

int main() {
    float principal, rate, time, compound_interest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    
    rate = rate / 100;

    compound_interest = principal * pow((1 + rate), time) - principal;

    printf("The compound interest for the principal amount %.2f at a rate of %.2f%% for %.2f years is %.2f\n", principal, rate * 100, time, compound_interest);

    return 0;
}
