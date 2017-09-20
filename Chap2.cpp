#include <iostream>
using namespace std;

int main()
{
	int gal,
		mpg,
		totalMiles;
		

	cout << "Enter how many gallons your car can take\n";
	cin >> gal;

	cout << "What is the miles per gallon rating on your car?\n";
	cin >> mpg;

	totalMiles = gal * mpg;
	cout << "Your car can be driven " << totalMiles << " miles without being refueled" << endl;

		return 0;
}