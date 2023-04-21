#include <stdio.h>
/**
 *main - Entry point
 *Print random numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int m;
	int n;

	for (l = 0; l < 8; l++)
	{
		for (m = l + 1; m < 9; m++)
		{
			for (n = m + 1; n < 10; n++)
			{
				putchar((l % 10) + '0');
				putchar((m % 10) + '0');
				putchar((n % 10) + '0');
			if (l == 7 && m == 8 && n == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
