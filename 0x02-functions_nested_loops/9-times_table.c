#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a, b, times;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			times = a * b;
			if (times > 9)
			{
				_putchar((times / 10) + '0');
			} else if (times < 10 && b > 0)
			{
				_putchar(' ');
			}
			_putchar((times % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
