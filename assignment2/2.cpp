//WAP to find roots of a quadratic equation (for D&gt;=0 case).
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients (a, b, and c) of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots of the quadratic equation are: %.2f and %.2f\n", root1, root2);
    } else {
        printf("The discriminant is negative. Roots are complex.\n");
    }

    return 0;
}
