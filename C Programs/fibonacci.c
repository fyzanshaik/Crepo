#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b,c,n;
	printf("Enter N value: ");
	scanf("%d", n);
	a = 0;
	b = 1;
	c = a + b;

	while (c <= n) {
		printf("%d\n", c);
		a = b;
		b = c;
		c = a + b;

	}



}