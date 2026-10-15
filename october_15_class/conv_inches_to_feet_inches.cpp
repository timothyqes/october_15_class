#include <iostream>
#include <string>

int main()
{
	int totalInches; //Variable declaration. This one uses four bytes of storage.
	std::cout << "Enter your height, in inches (not, however, feet inches): " << std::endl;
	std::cin >> totalInches;
	//int totalInches = 70; Adding a value is a variable initialization.

	const int NUMBER_OF_INCHES_PER_FOOt = 12;
	std::cout << totalInches << " inches is equal to " << totalInches / NUMBER_OF_INCHES_PER_FOOt << " feet" << std::endl;

	std::cout << " and " << totalInches % NUMBER_OF_INCHES_PER_FOOt << " inches" << std::endl;
	//Inches divided by number of inches in a foot, but will use the remainder value.
}
//We want variables that can change to benefit our program.