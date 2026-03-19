#include <stdio.h>

int main() {
    int i,n,f;

    printf("Enter number: ");
    scanf("%d", &n);
    f=1;
    printf("the factorial of given num are:");
    for(i=1;i<=n;i++){
    if(n%i==0)
    printf("\n%d",i);}

    return 0;
}