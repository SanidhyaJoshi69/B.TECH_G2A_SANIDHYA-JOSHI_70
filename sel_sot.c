#include<stdio.h>
void sel_sot (int a[],int n)
{
    int i,j,temp,m_i;
    for(i=0;i<n-1;i++)
    {
        m_i=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[m_i])
                m_i=j;
        }

                if(m_i!=i)
                {
                 temp=a[i];
                 a[i]=a[m_i];
                 a[m_i]=temp;
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
          sel_sot(a,n);
          printf("\nafter sorting array is\n");
        print (a,n);
        return 0;
    }
