#include "main.h"
/**
* main - prind the string out.
* return: 0 after succesful function
*/
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0
	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++
	}
	_putchar ('\n')
	return (0)
}
