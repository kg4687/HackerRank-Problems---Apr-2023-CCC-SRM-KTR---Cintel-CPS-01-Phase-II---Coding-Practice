#include <stdio.h>

int main()
{
	int marks;
	scanf("%d", &marks);
	if (marks>=76) printf("A");
    if (marks>=51 && marks<=75) printf("B");
    if (marks<=25 && marks>=0) printf("D");
    if (marks>=26 && marks<=50) printf("C");
    




	return 0;
}
