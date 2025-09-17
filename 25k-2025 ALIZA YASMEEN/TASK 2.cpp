// Task 3: Fuel Consumption Tracker
#include <stdio.h>

int main() {
    float distance, fuelUsed, pricePerLitre;
    float efficiency, totalCost;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuelUsed);

    printf("Enter fuel price per litre: ");
    scanf("%f", &pricePerLitre);

    efficiency = distance / fuelUsed;
    totalCost = fuelUsed * pricePerLitre;

    printf("\n------ Fuel Consumption Report ------\n");
    printf("Distance Travelled: %.2f km\n", distance);
    printf("Fuel Used: %.2f litres\n", fuelUsed);
    printf("Efficiency: %.2f km/litre\n", efficiency);
    printf("Total Fuel Cost: %.2f\n", totalCost);

    return 0;
}
