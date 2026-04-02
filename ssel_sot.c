#include<stdio.h>
#include<string.h>

void sel_sot(char a[][25],int n)
{
    int i,j,m_i;
    char temp[25];
    for(i=0;i<n-1;i++)
    {
        m_i=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[j],a[m_i])<0)
                m_i=j;
        }

                if(m_i!=i)
                {
                 strcpy (temp,a[i]);
                 strcpy (a[i],a[m_i]);
                 strcpy (a[m_i],temp);
                }
         
    } 
}
    

    

  
int main()
    {
        char a[25][25],n,i;
        printf("enter no. of elements");
        scanf("%d",&n);
        for (i=0;i<n;i++)
         scanf("\n%s",&a[i]);
        
         printf("before sorting array is \n");
        for(i=0;i<n;i++)
        printf("%s\t",a[i]);

        sel_sot(a,n);
        printf("\nafter sorting array is\n");
        for(i=0;i<n;i++)
        printf("%s\t",a[i]);
        
        return 0;
    }
