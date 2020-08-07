#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int itr,maxitr,i,j;
    float aerr,maxerr,err,t,u[10][10];
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
            u[i][j]=0;
    }
    printf("\nEnter the boundary conditions:");
    printf("\nEnter the boundary conditions for i=1, j=1,4:");
    for(j=1;j<=4;j++)
    {
        i=1;
        scanf("%f", &u[i][j]);
    }
    printf("\nEnter the boundary conditions for i=4, j=1,4:");
    for(j=1;j<=4;j++)
    {
        i=4;
        scanf("%f", &u[i][j]);
    }
    printf("\nEnter the boundary conditions for i=2, 3, j=1:");
    j=1;
    for(i=2;i<=3;i++)
    {

        scanf("%f", &u[i][j]);
    }
    printf("\nEnter the boundary conditions for i=2, 3, j=4:");
    j=4;
    for(i=2;i<=3;i++)
    {

        scanf("%f", &u[i][j]);
    }
    printf("\nEnter the allowed error and maximum number of iterations:");
    scanf("%f %d", &aerr, &maxitr);
    for(itr=1;itr<=maxitr;itr++)
    {
       maxerr=0;
       for(i=2;i<=3;i++)
       {
            for(j=2;j<=3;j++)
            {
                t=(u[i-1][j]+u[i+1][j]+u[i][j+1]+u[i][j-1])/4;
                err=fabs(u[i][j]-t);
                if (err>maxerr)
                    maxerr=err;
                u[i][j]=t;
            }

       }
       printf("\nIteration number %d", itr);
       printf("\nThe values are:");
       for(i=1;i<=4;i++)
       {
           printf("\n");
           for(j=1;j<=4;j++)
           printf("\t%f", u[i][j]);
       }
       if (maxerr<=aerr)
       {
           printf("\nThe solution is:");
           for(i=1;i<=4;i++)
           {
               printf("\n");
               for(j=1;j<=4;j++)
               printf("\t%f", u[i][j]);
           }
           return 0;
       }

    }
    printf("\nThe number of iterations are not sufficient");
    return 0;

}
