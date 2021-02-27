#include <iostream>

extern "C" int FirstAssemblyFunction();

int main()
{
	std::cout << "The result is: " << FirstAssemblyFunction() << std::endl;
	return 0;
}