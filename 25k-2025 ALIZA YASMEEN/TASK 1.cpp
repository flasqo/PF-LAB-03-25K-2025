// Task 1: Electricity Bill Calculator
#include <stdio.h>

int main() {
    char name[50];
    int units;
    float pricePerUnit, totalBill;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed (integer): ");
    scanf("%d", &units);

    printf("Enter Price per Unit (float): ");
    scanf("%f", &pricePerUnit);

    totalBill = units * pricePerUnit;

    printf("\n------ Electricity Bill ------\n");
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Price per Unit: %.2f\n", pricePerUnit);
    printf("Total Bill: %.2f\n", totalBill);

    return 0;
}
