#include <iostream>
#include <string>
#include <iomanip> //Used for setprecision().

int main()
{
	float costPerGallon = 3.80f; //Making this non-const allows prompting the user.

	//auto cost = 1.23; //auto automatically assigns the datatype. Adding an f at the end of a value -
	//		makes the value a float.

	float costToFill = 0.0f;

	float numberOfGallonsInTank = 0.0f; //Will be a cin prompt in the while loop.

	while (numberOfGallonsInTank <= 0) //Terminates when the number is greater than 0.
	{
		std::cout << "How many gallons is your vehicle able to hold? " << std::endl;
		std::cin >> numberOfGallonsInTank;
	}

	costToFill = costPerGallon * numberOfGallonsInTank; //E.g., 10 gallons costs about 38 dollars.

	std::cout << std::fixed << std::setprecision(2); //Shows a fixed number two digits after the decimal.
	std::cout << "It costs you " << costToFill << " to fill up your tank " << std::endl;

	//The range portion of the program:

	float mpg = 10;

	int numberOfMilesOnFullTank = numberOfGallonsInTank * mpg;

	std::cout << "The number of miles you can go on a full tank is: " << numberOfMilesOnFullTank 
		<< std::endl;
}
//variableName.clear() resets the contents or values of a variable.