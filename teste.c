#include <stdarg.h>
#include <stdio.h>

int max(int num_arg, ...)
{
	va_list args;
	int i;
	int x;
	int max;

	i = 0;
	max = 0;
	va_start(args, num_arg);
	while (i < num_arg)
	{
		x = va_arg(args, int);
		if (i == 0)
			max = x;
		else if (x > max)
			max = x;
		i++;
	}
	va_end(args);

	return (max);
}

int main()
{
	printf("%d", max(3, 1, 2, 0));
	return (0);
}
