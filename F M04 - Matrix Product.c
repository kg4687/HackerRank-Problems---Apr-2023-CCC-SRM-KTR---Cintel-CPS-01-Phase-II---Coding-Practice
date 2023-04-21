#include<stdio.h>
int main()
{
    //your code here
    int row,col,row1,col1,i,j,k;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&row1,&col1);
    int b[row1][col1];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(col == row1)
    {
        int sum[row][col1];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                sum[i][j] = 0;
                for(k=0;k<col;k++)
                {
                    sum[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}
