#include <stdio.h>

int cost(int option) {
    int price;
    // Determine price based on room option
    if (option == 1) {
        price = 5000;  
    }
    else if (option == 2) {
        price = 500;   
    }
    else if (option == 3) {
        price = 1000; 
    }
    else if (option == 4) {
        price = 2000;  
    }
    else {
        price = 0;    
    }
    return price;
}

int main() {
    int n, option, days;
    char name[50]; 
    
    printf("Enter how many rooms you want to book: ");
    scanf("%d", &n);  
    
    printf("Enter your name: ");
    scanf("%s", name); 
    
    printf("1. Deluxe room\n");
    printf("2. Single room\n");
    printf("3. Double room\n");
    printf("4. Triple room\n");
    
    printf("Enter which room you want to book: ");
    scanf("%d", &option); 

    printf("Enter number of days you plan to stay: ");
    scanf("%d", &days); 
    
    switch(option) {
        case 1:
            printf("Thanks for booking a Deluxe room at Venkeshwara Hotels, %s!\n", name);
            break;
        case 2:
            printf("Thanks for booking a Single room at Venkeshwara Hotels, %s!\n", name);
            break;
        case 3:
            printf("Thanks for booking a Double room at Venkeshwara Hotels, %s!\n", name);
            break;
        case 4:
            printf("Thanks for booking a Triple room at Venkeshwara Hotels, %s!\n", name);
            break;
        default:
            printf("Invalid room booking selection.\n");
            return 1; 
    }
    int room_price = cost(option);
    if (room_price != 0) {
        int total_cost = room_price * n * days;
        printf("Total cost for %d rooms for %d days is: %d\n", n, days, total_cost);
    } else {
        printf("Invalid room selection.\n");
    }

    return 0;
}

