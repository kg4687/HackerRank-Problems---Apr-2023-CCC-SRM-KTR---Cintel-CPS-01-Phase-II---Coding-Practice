#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,p,r;
    scanf("%f %f",&a,&p);
    if(a==0 && p ==0){printf("0");}
    else{r= pow(a,p);
    printf("%.0f",r);}
    return 0;
}
