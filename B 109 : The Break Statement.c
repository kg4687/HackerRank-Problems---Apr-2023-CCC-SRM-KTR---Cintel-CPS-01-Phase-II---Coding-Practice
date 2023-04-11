#include <stdio.h>

int is_prime(int num)
{
	if (num < 2) return 0;
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int i, num;
	scanf("%d", &num);
	for (i = num + 1; ; i++)
	{
		if (is_prime(i) == 1)//break the loop once youve found the prime
		{
			printf("%d",i);
		break;
		}
        
	}
	return 0;
}
