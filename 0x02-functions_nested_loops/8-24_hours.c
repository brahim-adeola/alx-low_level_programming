#include "main.h"
/**
 * jack_bauer: Prints every single minutes of the day
 *
 */
void jack_bauer(void)
{
	int current_time = 0;
	int hour_elapsed, mins_elapsed, secs_elapsed;

	while (current_time < 3)
	{
		hour_elapsed = 0;
		while (hour_elapsed < 4)
		{
			mins_elapsed = 0;
			while (mins_elapsed < 6)
			{
				secs_elapsed = 0;
				while (secs_elapsed < 10)
				{
					_putchar(current_time + '0');
					_putchar(hour_elapsed + '0');
					_putchar(':');
					_putchar(mins_elapsed + '0');
					_putchar(secs_elapsed + '0');
					_putchar('\n');
					secs_elapsed++;
				}
				mins_elapsed++;
			}
			hour_elapsed++;
		}
		current_time++;
	}
}
