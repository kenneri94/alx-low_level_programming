#include "main.h"
 /**
  * Declaration: puts2 -prints xters of a string
  * @str: the used string reference
  * Return: Always 0 (sucess)
  */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
