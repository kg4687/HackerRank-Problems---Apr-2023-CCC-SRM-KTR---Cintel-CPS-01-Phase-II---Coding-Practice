


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    char *ans[i];
    for(i=0;i<N;i++)
    {
        if(arr[i]%4 == 0)
        {
            ans[i] = "yes";
        }
        else
        {
            ans[i] = "no";
        }
    }
    for (i = 0; i < N; i++) puts(ans[i]);
    return 0;
}
