#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);
    
    // Derived from C/5 = (F-32)/9 -> F = (C * 9/5) + 32
    f = (c * 9 / 5) + 32;
    
    printf("Temperature in Fahrenheit: %.2f\n", f);
    return 0;
}