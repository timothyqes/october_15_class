#include <iostream>
#include <string>

int main() 
{
	//The next three lines of code are used to prompt the user to enter their height.
	//int enterTotalInches;
	//std::cout << "Enter your height, in inches (not, however, feet inches): " << std::endl;
	//std::cin >> totalInches; //No need to add std::endl.
	
	int totalInches = 70; //Variable declaration. This one uses four bytes of storage. Adding -
	//		a value is a variable initialization.

	const int NUMBER_OF_INCHES_PER_FOOt = 12; //const variables tend to be written in uppercase.
	std::cout << totalInches << " inches is equal to " << totalInches / NUMBER_OF_INCHES_PER_FOOt << " feet";

	std::cout << " and " << totalInches % NUMBER_OF_INCHES_PER_FOOt << " inches" << std::endl;
	//Inches divided by number of inches in a foot, but will use the remainder value.
}
//We want variables that can change to benefit our program.