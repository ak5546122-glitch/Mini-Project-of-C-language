#include <stdio.h>

int main() {
    double principal, rate, balance, interest;
    int years, i, choice;

    // Infinite menu loop
    while (1) {

        // Project Title


        printf("===========================================\n");
        printf("        BANKING INTEREST SIMULATOR\n");
        printf("===========================================\n");
        printf("This program calculates yearly compound\n");
        printf("interest on a bank balance.\n");
        printf("===========================================\n");

        // Menu


        printf("\n1. Run Banking Interest Simulator");
        printf("\n2. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 2) {
            break;  
        } 
        else if (choice != 1) {
            printf("\nInvalid choice. Please try again.\n\n");
            continue;
        }

        // Input


        printf("\nEnter principal amount: ");
        scanf("%lf", &principal);

        printf("Enter annual interest rate (in %%): ");
        scanf("%lf", &rate);

        printf("Enter number of years: ");
        scanf("%d", &years);

        // Convert rate from percent to decimal


        rate = rate / 100.0;

        // Initial balance


        balance = principal;

        // Loop once per year


        for (i = 1; i <= years; i++) {
            interest = balance * rate;
            balance = balance + interest;

            // Print balance after each year


            printf("Year %d balance: %.2f\n", i, balance);
        }

        // Final result

        
        printf("\nFinal balance after %d years: %.2f\n\n", years, balance);
    }

    printf("\nThank you for using Banking Interest Simulator.\n");
    return 0;
}
