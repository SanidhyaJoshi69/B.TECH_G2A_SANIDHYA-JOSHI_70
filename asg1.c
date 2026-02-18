#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, sum, per;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    
    sum = s1 + s2 + s3 + s4 + s5;
    per = (sum / 500) * 100;
    
    printf("Total Sum: %f\n", sum);
    printf("Percentage: %f%%\n", per);
    return 0;
}