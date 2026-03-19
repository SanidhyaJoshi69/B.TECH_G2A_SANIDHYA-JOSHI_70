#include <stdio.h>

int main() {
    int i,n,p,a=1;

    printf("Enter number: ");
    scanf("%d", &n);
      printf("Enter power: ");
    scanf("%d", &p);
    
    printf("ANSWER is:");

    for(i=0;i<=p;i++)
    a=n*n;
    printf("\n%d",a);

    return 0;
}