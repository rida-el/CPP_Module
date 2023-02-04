#include <iostream>
#include <cctype>
#include <iomanip>

int main(int ac, char *av[])
{
	int	i;
	std::string str = "";

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 1;
	while (av[i])
	{
		str += av[i];
		i++;
	}
	i = 0;
	while (str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);

}