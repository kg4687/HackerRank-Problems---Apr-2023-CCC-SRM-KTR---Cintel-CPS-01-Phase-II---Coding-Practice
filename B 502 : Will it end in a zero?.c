#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,count=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
