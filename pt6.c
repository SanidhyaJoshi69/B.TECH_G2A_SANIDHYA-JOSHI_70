#include<stdio.h>
int main(){
    int r,i ,j;
    printf("enter no of rows ");
    scanf("%d",&r);

    for(i=0;i<=r;i++){
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
 return 0;

}
