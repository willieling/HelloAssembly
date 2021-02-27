#include <iostream>

extern "C" int FirstAssemblyFunction();
extern "C" int Print(int value);
extern "C" int AddTwoInts(int value1, int value2);

int main()
{
	std::cout << "FirstAssemblyFunction: " << FirstAssemblyFunction() << std::endl;
	std::cout << "Print: " << Print(456) << std::endl;
	std::cout << "AddTwoInts: " << AddTwoInts(10, 20) << std::endl;

	return 0;
}