#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while(i < ac)
		{
			int j = 0;
			while (av[i][j])
			{
				putchar(toupper(av[i][j]));
				j++;
			}
			if (i + 1 != ac)
				putchar(' ');
			i++;
		}
	}
	return (0);
}