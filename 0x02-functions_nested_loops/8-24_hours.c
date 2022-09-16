#include "main.h"

/**
 * jack_bauer - 24
 *
 */
void jack_bauer(void)
{
	int min1, min2, h1, h2;

	for (h1 = 0; h1 < 3; h1++)
		for (h2 = 0; h2 < 4; h2++)
			for (min1 = 0; min1 < 6; min1++)
				for (min2 = 0; min2 < 10; min2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
}
