#include <stdio.h>

int main()
{
    int number, is_prime=0;
    int i=1;
    scanf("%d", &number);
    //your code here
    while(i<number){
        if(number%i==0){
            is_prime++;
        }
    i++;
    }
    

    if(number ==1) printf("no");
    if (is_prime == 1) printf("yes");
    if (is_prime > 1) printf("no");
    return 0;
}
