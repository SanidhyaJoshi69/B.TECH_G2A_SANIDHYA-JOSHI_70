#include <stdio.h>

int main() {
    int n, a[100],c1=0,c2=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        if(a[i]%2==0)
         c1++;

        else
         c2++;
        
    }
 printf("there a %d even nums ", c1);
 printf("\nthere are %d odd nums", c2);
    return 0;
}