#include<stdio.h>
int main(){
    int r,i ,j;
    printf("enter no of rows ");
    scanf("%d",&r);

    for(i=r;i>=0;i--){
        for (j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
 return 0;

}