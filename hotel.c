#include <stdio.h>

// Function to return price per room based on option
int getRoomPrice(int option) {
    switch (option) {
        case 1: return 5000;  // Deluxe Room
        case 2: return 1500;  // Single Room
        case 3: return 2500;  // Double Room
        case 4: return 3500;  // Triple Room
        default: return 0;
    }
}

int main() {
    int rooms, option, days;
    char name[50];

    printf("===== Welcome to Sri Venkateshwara Hotels =====\n\n");

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter number of rooms to book: ");
    scanf("%d", &rooms);

    printf("Enter number of days to stay: ");
    scanf("%d", &days);

    // Validation
    if (rooms <= 0 || days <= 0) {
        printf("Invalid number of rooms or days.\n");
        return 1;
    }

    printf("\nSelect Room Type:\n");
    printf("1. Deluxe Room   - Rs.5000 per day\n");
    printf("2. Single Room   - Rs.1500 per day\n");
    printf("3. Double Room   - Rs.2500 per day\n");
    printf("4. Triple Room   - Rs.3500 per day\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    int pricePerRoom = getRoomPrice(option);

    if (pricePerRoom == 0) {
        printf("Invalid room selection.\n");
        return 1;
    }

    int totalCost = pricePerRoom * rooms * days;

    printf("\nThank you %s for booking with us!\n", name);
    printf("Rooms booked : %d\n", rooms);
    printf("Days staying : %d\n", days);
    printf("Total amount : Rs.%d\n", totalCost);

    printf("\nWe hope you enjoy your stay!\n");
    printf("========================================\n");

    return 0;
}

