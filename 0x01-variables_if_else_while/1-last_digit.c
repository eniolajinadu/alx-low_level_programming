#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 *
 * main - prints the last didgit of a randomly generated number and whether it js greater than 5, less than 6, or 0
 *
 * return - always 0
 */
int main(void)
{
	int n;
	srand (time(0));
	n=rand()-RAND_MAX/2;

	if ((n%10)>5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, n%10);
	}
	else if ((n%10)<6 && (n%10)!=0)
	{
		printf("Last digit of %d is %d less than 6 and not 0\n", n,n%10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n,n%10);
	}
	return (0);
}