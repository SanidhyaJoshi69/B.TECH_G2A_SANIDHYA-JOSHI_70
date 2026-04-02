#include<stdio.h>
int main(){
    int r,i ,j;
    printf("enter no of rows ");
    scanf("%d",&r);

    for(i=0;i<=r;i++){
        for (j=0;j<=r;j++){
            printf("*");
        }
        printf("\n");
    }
 return 0;
}