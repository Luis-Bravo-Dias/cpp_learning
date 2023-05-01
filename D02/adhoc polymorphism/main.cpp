#include "Sample.Class.hpp"

int main()
{
	Sample	sam;

	float	z = 3.14;

	sam.bar('a');
	sam.bar(42);
	sam.bar(z);
	sam.bar(sam);

	return (0);
}