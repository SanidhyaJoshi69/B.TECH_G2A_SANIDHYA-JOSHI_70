#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, per;
    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    
    per = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("Percentage: %.2f%%\n", per);
    
    if (per >= 90)
        printf("Grade: A\n");
    else if (per >= 80)
        printf("Grade: B\n");
    else if (per >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");
        
    return 0;
}