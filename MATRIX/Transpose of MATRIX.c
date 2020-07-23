#include <stdio.h>
#include <conio.h>
#define MAX // give the value for MAX
int main()
{
    int i,j,m,n,mat[MAX][MAX],tmat[MAX][MAX];
    printf("\nEnter the number of rows and columns of the matrix:"); // square matrix only
    scanf("%d %d", &m, &n);
    printf("\nEnter the elements of the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &mat[i][j]);
    }
    printf("\nThe matrix is:");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("\t%d", mat[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            tmat[j][i]=mat[i][j];
    }
    printf("\nThe transpose of the matrix is:");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("\t%d", tmat[i][j]);
    }

    return 0;
}
