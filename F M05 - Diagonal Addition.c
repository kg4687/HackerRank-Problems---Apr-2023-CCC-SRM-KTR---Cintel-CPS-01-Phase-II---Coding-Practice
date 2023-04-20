

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == j)
            {
                sum += a[i][j];
            }
            if((i+j) == (n-1))
            {
                sum1 += a[i][j];
            }
        }
    }
    if(n%2 != 0)
    {
        printf("%d",sum+sum1-a[n/2][n/2]);
    }
    else
    {
        printf("%d",sum+sum1);
    }
    
    return 0;
}
