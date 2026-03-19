#include <stdio.h>

int main() {
    int n, a[100],c[100],j=0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) 
     scanf("%d", &a[i]);

    for(int i = n-1; i >0; i--){
     c[j]=a[i];
     j++;}

     printf("the reverse of the entered array is:");

    for(int i = 0; i < n; i++) 
     printf("%d ", c[i]);
    
      
    return 0;
}