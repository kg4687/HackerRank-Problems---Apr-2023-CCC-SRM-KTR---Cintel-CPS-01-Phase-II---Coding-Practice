#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



 int excel_title_to_Number(char* s) {
    int k = 0;
    while (s && *s) {
        k = k * 26 + (*s) - 'A' + 1;
        s ++;
    }
    return k;
}

int main(void)
{
    char col_title1[100];
    scanf("%s",col_title1);
    printf("%d",excel_title_to_Number(col_title1));
    return 0;
}
