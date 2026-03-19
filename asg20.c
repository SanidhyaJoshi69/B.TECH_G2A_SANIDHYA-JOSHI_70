#include <stdio.h>

int main() {
    int n, choice;

    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter binary: ");
        scanf("%d", &bin);

        while(bin > 0) {
            rem = bin % 10;
            dec += rem * base;
            base *= 2;
            bin /= 10;
        }
        printf("Decimal = %d", dec);
    }
    else {
        int dec, bin = 0, base = 1, rem;
        printf("Enter decimal: ");
        scanf("%d", &dec);

        while(dec > 0) {
            rem = dec % 2;
            bin += rem * base;
            base *= 10;
            dec /= 2;
        }
        printf("Binary = %d", bin);
    }

    return 0;
}