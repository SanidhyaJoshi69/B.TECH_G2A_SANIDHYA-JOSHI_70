#include <stdio.h>

int main() {
    int n, a[100],z=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        if(a[i]>z)
        z=a[i];
    }
 printf("largest num is:%d ", z);
    return 0;
}