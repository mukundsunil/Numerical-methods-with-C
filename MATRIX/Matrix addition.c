#include <stdio.h>
#include <conio.h>
#define MAX 20
int main()
{
int i,j,m,n,p,q,a,b,mat1[MAX][MAX],mat2[MAX][MAX],sum[MAX][MAX];
printf("\nEnter the number of rows and columns of first matrix:");
scanf("%d %d", &m, &n);
printf("\nEnter the number of rows and columns of second matrix:");
scanf("%d %d", &p, &q);
if(m!=p || n!=q)
{
printf("\nThe number of rows and columns of both the matrices must be the same");
}
a=m;
b=n;
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
for(j=0;j<b;j++)
sum[i][j]=mat1[i][j]+mat2[i][j];
}
printf("\nThe sum of the two matrices is:");
for(i=0;i<a;i++)
{
printf("\n");
for(j=0;j<b;j++)
printf("\t%d", sum[i][j]);
}
return 0;
}
