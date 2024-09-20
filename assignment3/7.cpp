/*A library charges a fine for every book returned late. For the first 5 days the fine is 50
paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return
the book after 30 days your membership will be canceled. WAP to accept no. of days the*/

#include <stdio.h>

int main() {
    int days;
    float fine = 0.0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 0.5;
    } else if (days <= 10) {
        fine = 5 + (days - 5) * 1.0; 
    } else if (days <= 30) {
        fine = 10 + (days - 10) * 5.0; 
    } else {
        printf("Your membership has been canceled due to late return.\n");
        return 0;
    }

    printf("Fine for %d days late: Rs. %.2f\n", days, fine);

    return 0;
}
