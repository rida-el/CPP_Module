#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
	A_Animal *array[2];
	int i = 0;

	while (i < 2)
	{
		if ( i < 1 )
			array[i] = new Dog();
		else
			array[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 2)
	{
		delete array[i];
		i++;
	}
	// atexit(leak);
	return 0;
}

