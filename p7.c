#include <stdio.h>

int main() {
    int n,dig,c=0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        dig=n % 10;
        c++;
        n /= 10;
    }

    printf("The num of digits are = %d",c );

    return 0;
}