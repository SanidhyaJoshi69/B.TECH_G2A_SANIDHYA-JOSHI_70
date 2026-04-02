#include<stdio.h>
int main(){
    int r,i ,j,k;
    printf("enter no of rows ");
    scanf("%d",&r);

    for(i=0;i<r;i++){
        for (j=0;j<2*(r-i-1);j++)
            printf(" ");
    for(k=0;k<=i;k++)
        printf("*");
        printf("\n");
    }
 return 0;

}