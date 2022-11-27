#include <stdio.h>

int main()
{
	int rupees,usd;
	printf("Enter rupees to convert in USD: ");
	scanf("%d", &rupees);
	usd = rupees * 0.012;
	printf("In USA it is %d\n",usd);

}