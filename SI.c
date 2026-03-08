#include <stdio.h>

int main() {
    float principal, rate, time, SI;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}
