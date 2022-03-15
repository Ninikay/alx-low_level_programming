#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - To print all natural numbers from n to 98
  * @p: Input the number to start printing from
  *
  * Return: Always 0 (success)
  */
void print_to_98(int p)
{
	if (p <= 98)
	{
		for (; p <= 98; n++)
		{
			if (p == 98)
			{
				printf("%d", p);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", p);
			}
		}
	}
	else
	{
		for (; p >= 98; p--)
		{
			if (p == 98)
			{
				printf("%d", p);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", p);
			}
		}
	}
}
