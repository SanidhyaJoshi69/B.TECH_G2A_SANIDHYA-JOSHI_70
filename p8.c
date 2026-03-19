#include <stdio.h>

int main() {
    int n, rev = 0,t;

    printf("Enter number: ");
    scanf("%d", &n);
    t=n;

    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n/= 10;
    }

    if(rev!=t)   
     printf(" not palindrome");

    else 
     printf("it is palindrome");

    return 0;
}