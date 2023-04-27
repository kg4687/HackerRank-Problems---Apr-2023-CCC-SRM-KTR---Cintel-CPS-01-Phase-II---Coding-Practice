#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    facto(n);
    return 0;
}
void facto (int g){
    for(int j = 1;j<=(g);j++){
        if (g%j==0){
            printf("%d ",j);
        }
    }
    printf("\n");
}
