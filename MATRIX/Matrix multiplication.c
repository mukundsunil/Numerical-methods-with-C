#include <stdio.h>
#include <conio.h>
#define MAX //define value for MAX
int main()
{
    int i,j,k,m,n,p,q,a,b,mat1[MAX][MAX],mat2[MAX][MAX],mul[MAX][MAX];
    printf("\nEnter the number of rows and columns of first matrix:");
    scanf("%d %d", &m, &n);
    printf("\nEnter the number of rows and columns of second matrix:");
    scanf("%d %d", &p, &q);
    if(n!=p)
    {
        printf("\nThe number of columns of first matrix must be equal to number of rows of second matrix");
    }
    a=m;
    b=q;
    printf("\nEnter the elements of the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("\nEnter the elements of the second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d", &mat2[i][j]);
    }
    for(i=0;i<a;i++)
    {
        j=0;
        for(j=0;j<b;j++)
        {
            mul[i][j]=0;
            for(k=0;k<b;k++)
                mul[i][j]+=mat1[i][k]*mat2[k][j];
        }

    }
    printf("\nThe resultant matrix is:");
    for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
            printf("\t%d", mul[i][j]);
    }
    return 0;
}
