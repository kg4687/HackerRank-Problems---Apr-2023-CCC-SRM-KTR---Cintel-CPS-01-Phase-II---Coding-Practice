#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d %d",&x ,&y);
    if(x>y)printf("Did not perform well");
    else if(x==y)printf("Did not participate");
    else if(x<y)printf("Performed well");
    return 0;
}
