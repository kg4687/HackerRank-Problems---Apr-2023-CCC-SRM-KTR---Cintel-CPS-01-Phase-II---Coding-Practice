#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int w;
    scanf("%d", &w);
    if (w > 2 && w % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n"); 
    }
}
