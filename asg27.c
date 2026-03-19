#include <stdio.h>

int main() {
    int m, n, a[10][10], sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(i == j)
                sum += a[i][j];

    printf("Diagonal sum = %d", sum);

    return 0;
}