#include <stdio.h>

int main(){
    int n, a[100],c[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(int i = 0; i < n; i++) 
     scanf("%d", &a[i]);

    for(int i = 0; i <n; i++)
     c[i]=a[i];

    printf("the coppied array is:");

    for(int i = 0; i < n; i++) 
     printf("%d ", c[i]);
    
      
 return 0;
}