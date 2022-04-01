#include <stdio.h>
#include <string.h>

int main()
{
	char a;
	do
	{
		a = getchar();

		if (a == '\n')
			break;

		putchar(a);
	} while (1);
}