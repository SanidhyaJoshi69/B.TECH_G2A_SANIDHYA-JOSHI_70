#include <stdio.h>

int main() {
    int n, a[100],sum=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        sum+= a[i];
        
    }
 printf("the sum of array is:%d ", sum);
    return 0;
}