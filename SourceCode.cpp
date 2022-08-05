#include <iostream>
// Calculator system
using namespace std;

int main()
{
	// Declare variables
	int num1, num2;
	char operation, repeat;
	bool validInput, wantsToQuit;

	// Introduce program to the user
	cout << "Wellcome to this calculator!" << endl;
	
	// Do while loop so the user can use the calculator as long as they want
	do
	{
		cout << "Please introduce the requested data." << endl;

		// Get number 1
		cout << "First number: ";
		cin >> num1;

		// Get number 2
		cout << "Second number: ";
		cin >> num2;

		// Loop to get a valid operation
		do
		{
			// Get desired operation
			cout << "Please specify what operation you desire." << endl;
			cout << "(A - Adition, S - Subtraction, M - Multiplication, D - Division)" << endl;
			cout << "Operation: ";
			cin >> operation;

			// Set to true as default and change it to false if needed
			validInput = true;

			switch (operation)
			{
			case 'A': case 'a':	// Adition
				cout << "Result: " << (num1 + num2) << endl; break;
			case 'S': case 's':	// Subtraction
				cout << "Result: " << (num1 - num2) << endl; break;
			case 'M': case 'm':	// Multiplication
				cout << "Result: " << (num1 * num2) << endl; break;
			case 'D': case 'd':	// Division
				(num2 == 0) ? cout << "Error: It is not possible to devide by 0." : cout << "Result: " << (static_cast <float> (num1) / num2) << endl; break; // Ternary to check if the divisor is 0 as that would cause an error
			default:
				cout << "Unvalid input! Please sellect a valid operation." << endl;
				validInput = false;
			}
		} while (!validInput);

		// Check if user wishes to do another operation
		do
		{
			// Get input
			cout << "Do you wish to do another calculation?" << endl;
			cout << "(Y - Yes, N - No)" << endl;
			cin >> repeat;


			// Set to true as default and change it to false if needed
			validInput = true;

			switch (repeat)
			{
			case 'Y': case 'y':	// Yes
				wantsToQuit = false;
				break;
			case 'N': case 'n':	// No
				cout << "Thank you for using the program. Goodbye." << endl;
				wantsToQuit = true;
				break;
			default:
				cout << "Unvalid input! Please select a valid answer." << endl;
				validInput = false;
			}
		} while (!validInput);
	} while (!wantsToQuit);

	return 0;
}