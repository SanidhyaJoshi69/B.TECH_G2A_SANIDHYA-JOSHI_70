#include<stdio.h>
void bub_sot (int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;}
            }

    }
}
    void print (int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);}
    
int main()
    {
        int a[50],n,i;
        printf("enter no. of elements");
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            printf("enter a[%d]",i);
            scanf("%d",&a[i]);
        }
         printf("before sorting array is \n");
         print(a,n);
          bub_sot(a,n);
          printf("\nafter sorting array is\n");
        print (a,n);
        return 0;
    }
