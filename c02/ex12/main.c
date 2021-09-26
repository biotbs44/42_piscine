#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	long long	lg;
	char		*str = "apple";
	char		*hex = "0123456789abcdef";
	char		arr[16];
	int			i;

	i = 0;
	lg = (long long) str;
	while (i < 16)
	{
		arr[i++] = hex[lg % 16];
		lg /= 16;
	}
	i = 0;
	while (i < 16)
	{
		write(1, &arr[i++], 1);
	}
}

