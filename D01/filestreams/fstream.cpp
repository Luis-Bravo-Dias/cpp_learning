#include <iostream>
#include <fstream>

int	main()
{
	std::ifstream	ifs("numbers"); //input file
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out"); //output file

	ofs << "I like ponies a whole damn lot" << std::endl;
	ofs.close();
}