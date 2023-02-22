#include <stdlio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Check if a number.
 * @void: Null value
 *
 * Description: Print if a number is positive, negative or zero
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	Else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
