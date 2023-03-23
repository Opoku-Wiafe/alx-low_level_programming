#include "main.h"
/**
 * times_table - this function prints times table of 9.
 *
 * Return: return 0 since void.
 */
void times_table(void)
{
	int i, j, k, l, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (k > 9)
			{
				l = k % 10;
				d = (k - l) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(l + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
