// Task 5: Loan EMI Calculator
#include <stdio.h>
#include <math.h>

int main() {
    float principal, annualRate, monthlyRate, emi;
    int years, n;

    printf("Enter Loan Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &annualRate);

    printf("Enter Loan Duration (years): ");
    scanf("%d", &years);

    monthlyRate = annualRate / (12 * 100);
    n = years * 12;

    emi = (principal * monthlyRate * pow(1 + monthlyRate, n)) /
          (pow(1 + monthlyRate, n) - 1);

    printf("\n------ Loan EMI Report ------\n");
    printf("Loan Amount: %.2f\n", principal);
    printf("Annual Interest Rate: %.2f%%\n", annualRate);
    printf("Duration: %d years (%d months)\n", years, n);
    printf("Monthly EMI: %.2f\n", emi);

    return 0;
}
