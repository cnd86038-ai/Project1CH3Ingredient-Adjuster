#include <iostream>
using namespace std;

int main()
{
	const int RECIPE_YIELD = 48;
	const double SUGAR = 1.5;
	const double BUTTER = 1.0;
	const double FLOUR = 2.75;

	int desiredYield;
	double sugarperCookie, butterperCookie, flourperCookie;
	double requiredSugar, requiredButter, requiredFlour;

	cout << "How many cookies do you want to make? ";
	cin >> desiredYield;

	sugarperCookie = SUGAR / RECIPE_YIELD;
	butterperCookie = BUTTER / RECIPE_YIELD;
	flourperCookie = FLOUR / RECIPE_YIELD;

	requiredSugar = sugarperCookie * desiredYield;
	requiredButter = butterperCookie * desiredYield;
	requiredFlour = flourperCookie * desiredYield;

	cout << "\nTo make " << desiredYield << " cookies, you will need:\n";
	cout << requiredSugar << " cups of sugar\n";
	cout << requiredButter << " cups of butter\n";
	cout << requiredFlour << " cups of flour\n";
	return 0;
}