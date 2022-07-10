#include <stdio.h>
int main() {
    int a[200][200], b[200][200], c[200][200], m, n, i, j, k;
    printf("Enter the Rows(m) & Column(n): ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of A: ");
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of B: ");
    for (int i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Value of A*B are :");
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for ( k = 0; k < m; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d \t",c[i][j]);
        }
    }
    return 0;
}