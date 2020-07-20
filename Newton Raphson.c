#include <stdio.h>
#include <math.h>
float f(float x);
float df(float x);
int main()
{
int itr, maxitr;
float h, aerr, x0, x1;
printf("\nEnter the initial value, maximum iterations and allowed tolerance:");
scanf("%f %d %f", &x0, &maxitr, &aerr);
for(itr=1;itr<=maxitr;itr++)
{
h=f(x0)/df(x0);
x1=x0-h;
printf("\nThe iteration is %d and root is %f", itr, x1);
x0=x1;
if(fabs(h)<aerr)
{
printf("\nThe solution has converged in %d iterations and the root is %f", itr, x1);
return 0;
}
else
printf("\nThe solution has not converged");
}
return 0;
}
float f(float x)
{
return /*Enter the equation in f(x)=0 form*/;
}
float df(float x)
{
    return /*Enter the differentiated equation in the same form as above*/;
}
