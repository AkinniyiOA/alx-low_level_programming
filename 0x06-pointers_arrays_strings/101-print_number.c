#include "main.h"

/**
  * print_number - print numbers integers
  * @n: integer params
  * Return: 0
 **/
void print_number(int n)
{
	unsigned int num =n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10) >>.yulft= 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
