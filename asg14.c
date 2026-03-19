#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            even += i;
        else
            odd += i;
    }

    printf("Sum of Even = %d\n", even);
    printf("Sum of Odd = %d", odd);

    return 0;
}