#include<stdio.h>
void bub_sot (char a[][25],int n){
    int i,j;
    char temp[25];
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){

            if(strcmp(a[j],a[j+1])>0){

                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);}
            }

    }
}
    
int main()
    {
        char a[25][25],n,i;
        printf("enter no. of elements");
        scanf("%d",&n);

         printf("enter your inputs");
        for (i=0;i<n;i++)
         scanf("\n%s",&a[i]);
        
         printf("before sorting array is \n");
        for(i=0;i<n;i++)
        printf("%s\t",a[i]);

        bub_sot(a,n);
        printf("\nafter sorting array is\n");
        for(i=0;i<n;i++)
        printf("%s\t",a[i]);
        
        return 0;
    }
