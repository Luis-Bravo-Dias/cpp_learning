#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v)
{
	std::cout << "Constructor called" << std::endl;

	this->_Foo = v;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return this->_Foo;
}

int	Sample::compare(Sample *other) const
{
	if (this->_Foo < other->getFoo())
		return (-1);
	else if (this->_Foo > other->getFoo())
		return (1);
	return (0);
}