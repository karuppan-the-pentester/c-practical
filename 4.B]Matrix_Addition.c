#include <stdio.h>
int main() {
    int a[200][200], b[200][200], c[200][200], m, n, i, j;
    printf("Enter the Rows(m) & Column(n): ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of A: ");
    for (int i = 0; i < m; i++)
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
    printf("The Value of A+B are :\n");
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]+b[i][j]);
        }
    }

}