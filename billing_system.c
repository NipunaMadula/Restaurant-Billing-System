#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;
    
    printf("Welcome to the Restaurant Billing System\n");
    printf("1. Pizza (Rs. 500)\n");
    printf("2. Burger (Rs. 250)\n");
    printf("3. Pasta (Rs. 300)\n");
    printf("4. Exit\n");

    do {
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 500;
                break;
            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 250;
                break;
            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += quantity * 300;
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 4);

    printf("Total Bill: Rs. %.2f\n", total);
    return 0;
}

