#include "Sample.Class.hpp"

Sample::Sample(void): _foo(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Sample::Sample(int const n):_foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Sample::Sample(Sample const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

Sample &	Sample::operator=(Sample const & rhs)
{
	std::cout << "Assignation operator called from " << this->_foo;
	std::cout << " to " << rhs.getFoo() << std::endl;

	this->_foo = rhs.getFoo();

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Sample const & rhs)
{
	o << rhs.getValue();
	return (o);
}