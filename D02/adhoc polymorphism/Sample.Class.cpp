#include "Sample.Class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member function bar called with char overload: " << c << std::endl;
	return ;
}

void	Sample::bar(int const i) const
{
	std::cout << "Member function bar called with int overload: " << i << std::endl;
	return ;
}

void	Sample::bar(float const z) const
{
	std::cout << "Member function bar called with float overload: " << z << std::endl;
	return ;
}

void	Sample::bar(Sample const & i) const
{
	(void)i;
	std::cout << "Member function bar called with Sample overload: " << std::endl;
	return ;
}
